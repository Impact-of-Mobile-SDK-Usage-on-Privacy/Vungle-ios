//
//  InquireConsentViewController.swift
//  VungleTestbed
//
//  This display is intended for setting and withdrawing consent. The consent is set via VunglePrivacySettings API.
//

import UIKit
import VungleAdsSDK

class InquireConsentViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        VunglePrivacySettings.setGDPRStatus(false)
        if (MyVariables.onLoad) {
            giveConsent(self);
        }
    }

    @IBAction func giveConsent(_ sender: Any) {
        let alertController = UIAlertController(title: "Give consent", message: "Use GDPR API", preferredStyle: .alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            VunglePrivacySettings.setGDPRStatus(true)
            print("Ok button tapped");
        }
        alertController.addAction(OKAction)
        self.present(alertController, animated: true, completion: nil)
    }
    
}
