//
//  InitializeViewController.swift
//  VungleTestbed
//
// This display enables the Vungle SDK to be initialized.
//

import UIKit
import VungleAdsSDK

class InitializeViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        print("Initialize");
        if (MyVariables.onLoad) {
            buttonClick(self);
        }
    }
    
    func initSDK() {
        VungleAds.initWithAppId(MyVariables.APP_ID) { error in
            if let error = error {
                let alert = UIAlertController(title: "Error", message: "\(error.description)", preferredStyle:.alert)
                let OKAction = UIAlertAction(title: "OK", style: .default) {
                    (action: UIAlertAction!) in
                    // Code in this block will trigger when OK button tapped.
                    print("Ok button tapped");
                }
                alert.addAction(OKAction)
                self.present(alert, animated: true, completion: nil)
            } else {
                print("Init is complete")
            }
        }
        
        if (VungleAds.isInitialized()) {
            let alertController = UIAlertController(title: "Create Object", message: "SDK initialized", preferredStyle: .alert)
            let OKAction = UIAlertAction(title: "OK", style: .default) {
                (action: UIAlertAction!) in
                // Code in this block will trigger when OK button tapped.
                print("Ok button tapped");
            }
            alertController.addAction(OKAction)
            self.present(alertController, animated: true, completion: nil)
        } else {
            let alertController = UIAlertController(title: "Create Object", message: "SDK not initialized", preferredStyle: .alert)
            let OKAction = UIAlertAction(title: "OK", style: .default) {
                (action: UIAlertAction!) in
                // Code in this block will trigger when OK button tapped.
                print("Ok button tapped");
            }
            alertController.addAction(OKAction)
            self.present(alertController, animated: true, completion: nil)
        }
    }
    
    @IBAction func buttonClick(_ sender: Any) {
        initSDK();
        
        let alertController = UIAlertController(title: "Initialize SDK", message: "Init Vungle", preferredStyle: .alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alertController.addAction(OKAction)
        self.present(alertController, animated: true, completion: nil)
    }
}
