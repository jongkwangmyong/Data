#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // Make sure you set the size of the component after
    // you add any child components.
	setLookAndFeel(&genelecLookAndFeel);
	ResetLayout.setBounds(20, 500, 160, 50);
    
    LayoutStyle.setBounds(30, 150, 160, 50);
	orderBox.setBounds(20, 200, 160, 30);
    Devices.setBounds(20, 220, 160, 50);

	
    descriptionLabel.setFont(Font(24.0f));   
    GENELEC.setFont(Font(24.0f));
    
   
    captions.setFont(Font(20.0f));
	//addAndMakeVisible(tabs);
	ResetLayout.onClick = [] { AlertWindow::showMessageBoxAsync(MessageBoxIconType::InfoIcon, "Alert", "This is an AlertWindow"); };
	ResetLayout.setHasFocusOutline(true);
	menuBar.reset(new MenuBarComponent(this));
	addAndMakeVisible(menuBar.get());
	setApplicationCommandManagerToWatch(&commandManager);
	commandManager.registerAllCommandsForTarget(this);
    StringArray array = {"Stereo","Stereo with Sub","5.1","5.1.2","5.1.4","7.1","7.1.2","7.1.4","9.1.2","9.1.4","9.1.6","Auro3D","Sony 360RA","NHK22.2","Small","Medium","Large","Huge"};
	for (int i = 1; i < array.size()+1; ++i)
		orderBox.addItem(array[i-1], i);
    orderBox.onChange = [this]
	{
		updateValueUI();		
	};
	orderBox.setSelectedId(1);
	// this ensures that commands invoked on the DemoRunner application are correctly
	// forwarded to this demo
	commandManager.setFirstCommandTarget(this);

	// this lets the command manager use keypresses that arrive in our window to send out commands
	addKeyListener(commandManager.getKeyMappings());

	//addChildComponent(menuHeader);
	//addAndMakeVisible(outerCommandTarget);
	addAndMakeVisible(orderBox);
    addAndMakeVisible(Devices);  
    addAndMakeVisible(Unplaced);
    addAndMakeVisible(NotUsed);
	addAndMakeVisible(UnplacedNum);
	addAndMakeVisible(NotUsedNum);
    addAndMakeVisible(txtLeft);
    addAndMakeVisible(txtRight);
    
    
        
	addAndMakeVisible(ResetLayout);
    addAndMakeVisible(ConfirmLayout);
	addAndMakeVisible(descriptionLabel);
	addAndMakeVisible(captions);
    addAndMakeVisible(LayoutStyle);
    addAndMakeVisible(GENELEC);
	addAndMakeVisible(txtsub);

	setWantsKeyboardFocus(true);

	
	
    //=======================JKM Add End==========================

    setSize (800, 600);

    // Some platforms require permissions to open input channels so request that here
    if (juce::RuntimePermissions::isRequired (juce::RuntimePermissions::recordAudio)
        && ! juce::RuntimePermissions::isGranted (juce::RuntimePermissions::recordAudio))
    {
        juce::RuntimePermissions::request (juce::RuntimePermissions::recordAudio,
                                           [&] (bool granted) { setAudioChannels (granted ? 2 : 0, 2); });
    }
    else
    {
        // Specify the number of input and output channels that we want to open
        setAudioChannels (2, 2);
    }
}
void MainComponent::updateValueUI()
{

}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
	setLookAndFeel(nullptr);
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
}

void MainComponent::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!

    // For more details, see the help for AudioProcessor::getNextAudioBlock()

    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
    bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    int x = 30, y = 300, len = 50;
    int bubbleNum = 0, divider =21;


    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

	g.setFont(Font(16.0f));
	g.setColour(Colours::white);
    //g.drawEllipse(200, 200, 100, 100, 3);
    //g.drawText("Hello Start", getLocalBounds(), Justification::centred, true);
    
    int tempLeftY = 0, tempRightY =0;

	NotUsed.setBounds(x, y + 1.732 * len , 100, 50);
	NotUsedNum.setBounds(x+10, y + 1.732 * len + 20, 100, 50);

	Unplaced.setBounds(x + len+len/2, y + 1.732 * len/2 , 100, 50);
    UnplacedNum.setBounds(x + len + len / 2+10, y + 1.732 * len / 2 + 20, 100, 50);
    //Setting component
    DrawComponent(x, y, len, g);
    x = x + len + len / 2, y = y - 1.732 * len / 2;
    DrawComponent(x, y, len, g);
    //Main component

	switch (orderBox.getSelectedId())
	{
	    case 1:
			DrawComponent5(orderBox.getSelectedId(),g);
			break;
	    case 2:
			DrawComponent5(orderBox.getSelectedId(),g);
            break;
	    case 3:			
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			DrawComponent7(g);			
			break;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			DrawComponent9(g);			
			break;
		case 18:
			DrawComponent11(g);			
			break;
        default:
            break;
	}
   
	
   // g.drawText("Hello World111!", getLocalBounds(), Justification::centred, true);
    // You can add your drawing code here!
}
void MainComponent::DrawComponent(int x, int y, int len,Graphics& g )
{
	g.drawLine(x, y, x + len, y);
	g.drawLine(x, y, x - len / 2, y + 1.732 * len / 2);
	g.drawLine(x - len / 2, y + 1.732 * len / 2, x, y + 1.732 * len);
	g.drawLine(x, y + 1.732 * len, x + len, y + 1.732 * len);
	g.drawLine(x + len, y, x + len + len / 2, y + 1.732 * len / 2);
	g.drawLine(x + len + len / 2, y + 1.732 * len / 2, x + len, y + 1.732 * len);
}
void MainComponent::DrawComponent5(int select,Graphics& g)
{
	int x, y, divider=21, tempLeftY, len,bubbleNum =5;

	auto b = getLocalBounds();
	x = b.getWidth() / 3, y = b.getHeight() / 3;
	len = b.getWidth() / divider;
	tempLeftY = y;

	for (int i = 0; i < bubbleNum - 2; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 6 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;	
	for (int i = 0; i < bubbleNum - 1; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 3 * len, tempLeftY, len, g);
		if (select == 2 && i==0)
		{
			txtsub.setBounds(x, tempLeftY + 1.732 * len / 3, 100, 50);
		}
		if (i == 1)
		{
			txtLeft.setBounds(x, tempLeftY + 1.732 * len / 3, 100, 50);
			txtRight.setBounds(x + 3 * len, tempLeftY + 1.732 * len / 3, 100, 50);
		}
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	repaint();
}
void MainComponent::DrawComponent7(Graphics& g)
{
	int x, y, divider = 26, tempLeftY, len, bubbleNum = 7;


	auto b = getLocalBounds();
	x = b.getWidth() / 3, y = b.getHeight() / 3;
	len = b.getWidth() / divider;
	tempLeftY = y;

	for (int i = 0; i < bubbleNum - 3; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 9 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum - 2; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 6 * len, tempLeftY, len, g);
		if (i == 1)
		{
			txtLeft.setBounds(x, tempLeftY + 1.732 * len / 3, 100, 50);
			txtRight.setBounds(x + 3 * len, tempLeftY + 1.732 * len / 3, 100, 50);
		}
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum-1; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 3 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum ; i++)
	{
		DrawComponent(x, tempLeftY, len, g);	
		tempLeftY += 1.732 * len;
	}
	repaint();
}
void MainComponent::DrawComponent9(Graphics& g)
{
	int x, y, divider = 30, tempLeftY, len, bubbleNum = 9;


	auto b = getLocalBounds();
	x = b.getWidth() / 3, y = b.getHeight() / 3;
	len = b.getWidth() / divider;
	tempLeftY = y;

	for (int i = 0; i < bubbleNum - 4; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 12 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum - 3; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 9 * len, tempLeftY, len, g);
		if (i == 1)
		{
			txtLeft.setBounds(x, tempLeftY + 1.732 * len / 3, 100, 50);
			txtRight.setBounds(x + 3 * len, tempLeftY + 1.732 * len / 3, 100, 50);
		}
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum - 2; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 6 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum-1; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 3 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum; i++)
	{
		DrawComponent(x, tempLeftY, len, g);		
		tempLeftY += 1.732 * len;
	}	
	repaint();
}
void MainComponent::DrawComponent11(Graphics& g)
{
	int x, y, divider = 35, tempLeftY, len, bubbleNum = 11;


	auto b = getLocalBounds();
	x = b.getWidth() / 3, y = b.getHeight() / 3;
	len = b.getWidth() / divider;
	tempLeftY = y;

	for (int i = 0; i < bubbleNum - 5; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 15 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum - 4; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 12 * len, tempLeftY, len, g);
		if (i == 1)
		{
			txtLeft.setBounds(x, tempLeftY + 1.732 * len / 3, 100, 50);
			txtRight.setBounds(x + 3 * len, tempLeftY + 1.732 * len / 3, 100, 50);
		}
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum - 3; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 9 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum - 2; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 6 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum-1; i++)
	{
		DrawComponent(x, tempLeftY, len, g);
		DrawComponent(x + 3 * len, tempLeftY, len, g);
		tempLeftY += 1.732 * len;
	}
	x = x + len + len / 2;
	y = y - 1.732 * len / 2;
	tempLeftY = y;
	for (int i = 0; i < bubbleNum; i++)
	{
		DrawComponent(x, tempLeftY, len, g);		
		tempLeftY += 1.732 * len;
	}
	repaint();
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	auto b = getLocalBounds();

	if (menuBarPosition == MenuBarPosition::window)
	{
		menuBar->setBounds(b.removeFromTop(LookAndFeel::getDefaultLookAndFeel()
			.getDefaultMenuBarHeight()));
	}	
    ConfirmLayout.setBounds(b.getWidth()-150, b.getHeight() - 100, 150, 50);
    descriptionLabel.setBounds(b.getWidth()/3+50, 10, 360, 100);
    captions.setBounds(b.getWidth() / 3, 50, 660, 100);
    GENELEC.setBounds(b.getWidth()/2-50, b.getHeight()-50, 360, 100);
}
