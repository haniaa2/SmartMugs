//
//  ViewController.swift
//  smartmug
//
//  Created by Srishti Modgil on 4/3/23.
//

import UIKit
import MSCircularSlider

class ViewController: UIViewController {
    @IBOutlet weak var numberLabel: UILabel!
    @IBOutlet weak var slider: MSCircularSlider!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Set up the circular slider
                slider.minimumValue = 0
                slider.maximumValue = 100
                slider.currentValue = 50
                slider.addTarget(self, action: #selector(valueChanged), for: .valueChanged)
                
                // Set up the value label
                numberLabel.text = "\(Int(slider.currentValue))"
                numberLabel.font = UIFont.systemFont(ofSize: 40)
                numberLabel.textColor = UIColor.black
                numberLabel.textAlignment = .center
        
            }
            
            @objc func valueChanged() {
                // Update the value label with the current value of the slider
                numberLabel.text = "\(Int(slider.currentValue))"
            }
        }

            // Add target action to circular sl


    


    



