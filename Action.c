Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en-IN;q=0.7,en;q=0.3");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; WOW64; Trident/7.0; rv:11.0) like Gecko");

	web_url("PolicyCenter.do", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* login */

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("Cache-Control", 
		"no-cache");

	web_submit_data("pkmslogin.form", 
		"Action=https://stdipxyvip01.aaa-acg.net/pkmslogin.form", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=p77196", ENDITEM, 
		"Name=password", "Value=password123", ENDITEM, 
		"Name=login-form-type", "Value=pwd", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	/* account creation */

	web_add_auto_header("Accept", 
		"*/*");

	web_revert_auto_header("Cache-Control");

	web_add_auto_header("Accept-Language", 
		"en-US,en-IN;q=0.7,en;q=0.3");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("PolicyCenter.do_2", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&Desktop%3AMenuLinks_toggle=&DesktopActivities%3ADesktopActivitiesScreen%3ADesktopActivitiesLV%3AactivitiesFilter=NamedFilter%2FAll%20open&DesktopActivities%3ADesktopActivitiesScreen%3ADesktopActivitiesLV%3AactivitiesFilterSales=NamedFilter%2FAll%20open%20-%20Sales&"
		"DesktopActivities%3ADesktopActivitiesScreen%3ADesktopActivitiesLV%3AactivitiesFilterUW=NamedFilter%2FAll%20open%20-%20Underwriting&%3Atblinks=kkVA%2FjpDw1qD2mjAElkr6nifuqg%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar=mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&Desktop%3ADesktopMenuActions=qiI1%2B2dUI3aGp2hFcGIAB3ho4RQ%3D&Desktop%3AMenuLinks=SVMq9KLCrTMlWaVwUKNjhuou3xo%3D&csrfToken=&eventSource=TabBar%3AAccountTab%3AAccountTab_NewAccount_act&objFocusId="
		"TabBar%3AAccountTab", 
		LAST);

	/* enter first name and last name click search */

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Cache-Control", 
		"no-cache");

	lr_think_time(14);

	web_submit_data("PolicyCenter.do_3", 
		"Action=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TabBar:AccountTab:AccountTab_AccountNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_SubmissionNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_PolicyRetrievalItem", "Value=", ENDITEM, 
		"Name=QuickJump", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:GlobalPersonNameInputSet:FirstName", "Value={p_FirstName}", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:GlobalPersonNameInputSet:LastName", "Value={p_FirstName}", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:FirstNameExact", "Value=true", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:LastNameExact", "Value=true", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:DateOfBirth", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:MemberShipId", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:PhoneNumber", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:EmailID", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:Producer", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:ProcuderCode", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:City1", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:County", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:State", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:PostalCode1", "Value=", ENDITEM, 
		"Name=:tblinks", "Value=6VsI+3UBrXfj6B0jx+zwCU+77tI=", ENDITEM, 
		"Name=:tabs", "Value=CXcDZmad1N6sLNcBZ0KTnJyf7vU=", ENDITEM, 
		"Name=infoBar", "Value=mfH/SDQ8L06WF3MIAQRaP+cBPtY=", ENDITEM, 
		"Name=systemAlertBar", "Value=vyGp6PvFo4RvsFtPoIWeCReyIC8=", ENDITEM, 
		"Name=csrfToken", "Value=", ENDITEM, 
		"Name=eventSource", "Value=NewAccount:NewAccountScreen:NewAccountSearchDV:SearchAndResetInputSet:SearchLinksInputSet:Search_act", ENDITEM, 
		"Name=objFocusId", "Value=NewAccount:NewAccountScreen:NewAccountSearchDV:SearchAndResetInputSet:SearchLinksInputSet:Search", ENDITEM, 
		LAST);

	/* create new account>>person */

	web_revert_auto_header("Cache-Control");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(54);

	web_submit_data("PolicyCenter.do_4", 
		"Action=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TabBar:AccountTab:AccountTab_AccountNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_SubmissionNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_PolicyRetrievalItem", "Value=", ENDITEM, 
		"Name=QuickJump", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:GlobalPersonNameInputSet:FirstName", "Value={p_FirstName}", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:GlobalPersonNameInputSet:LastName", "Value={p_FirstName}", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:FirstNameExact", "Value=true", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:LastNameExact", "Value=true", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:DateOfBirth", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:MemberShipId", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:PhoneNumber", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:EmailID", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:Producer", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:ProcuderCode", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:City1", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:County", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:State", "Value=", ENDITEM, 
		"Name=NewAccount:NewAccountScreen:NewAccountSearchDV:AddressOwnerAddressInputSet:globalAddressContainer:GlobalAddressInputSet:PostalCode1", "Value=", ENDITEM, 
		"Name=:tblinks", "Value=YwyR/D7yO3Elr6DFh06Ps/ObToM=", ENDITEM, 
		"Name=:tabs", "Value=CXcDZmad1N6sLNcBZ0KTnJyf7vU=", ENDITEM, 
		"Name=infoBar", "Value=mfH/SDQ8L06WF3MIAQRaP+cBPtY=", ENDITEM, 
		"Name=systemAlertBar", "Value=vyGp6PvFo4RvsFtPoIWeCReyIC8=", ENDITEM, 
		"Name=csrfToken", "Value=", ENDITEM, 
		"Name=eventSource", "Value=NewAccount:NewAccountScreen:NewAccountButton:NewAccount_Person_act", ENDITEM, 
		"Name=objFocusId", "Value=NewAccount:NewAccountScreen:NewAccountButton", ENDITEM, 
		LAST);

	/* enter mandatory details */

	web_add_auto_header("Cache-Control", 
		"no-cache");

	lr_think_time(44);

	web_submit_data("PolicyCenter.do_5", 
		"Action=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TabBar:AccountTab:AccountTab_AccountNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_SubmissionNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_PolicyRetrievalItem", "Value=", ENDITEM, 
		"Name=QuickJump", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:GlobalPersonNameInputSet:Prefix", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:GlobalPersonNameInputSet:FirstName", "Value={p_FirstName}", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:GlobalPersonNameInputSet:MiddleInitial", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:GlobalPersonNameInputSet:LastName", "Value={p_FirstName}", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:GlobalPersonNameInputSet:Suffix", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:GlobalPersonNameInputSet:Gender", "Value=F", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:HomePhone:GlobalPhoneInputSet:NationalSubscriberNumber", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:Phone:GlobalPhoneInputSet:NationalSubscriberNumber", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:CellPhone:GlobalPhoneInputSet:NationalSubscriberNumber", "Value=201-345-6789", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:FaxPhone:GlobalPhoneInputSet:NationalSubscriberNumber", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:PrimaryPhone", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:EmailAddress1", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:AddressLine1", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:AddressLine2", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:AddressType1", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:AddressType2", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:City", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:County", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:State", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:PostalCode", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:AddressDescription", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:OfficialIDInputSet:OfficialIDDV_Input", "Value=", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:PrimaryLanguage", "Value=en_US", ENDITEM, 
		"Name=CreateAccount:CreateAccountScreen:CreateAccountDV:ProducerSelectionInputSet:Producer", "Value=", ENDITEM, 
		"Name=:tblinks", "Value=VDJ0RGv9OczNn5CIVShNUuI3giE=", ENDITEM, 
		"Name=:tabs", "Value=CXcDZmad1N6sLNcBZ0KTnJyf7vU=", ENDITEM, 
		"Name=infoBar", "Value=mfH/SDQ8L06WF3MIAQRaP+cBPtY=", ENDITEM, 
		"Name=systemAlertBar", "Value=vyGp6PvFo4RvsFtPoIWeCReyIC8=", ENDITEM, 
		"Name=csrfToken", "Value=", ENDITEM, 
		"Name=eventSource", "Value=_refresh_", ENDITEM, 
		"Name=eventParam", "Value=CreateAccount:CreateAccountScreen:CreateAccountDV:CreateAccountContactInputSet:CellPhone:GlobalPhoneInputSet:NationalSubscriberNumber", ENDITEM, 
		LAST);

	lr_think_time(24);

	web_custom_request("PolicyCenter.do_6", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=renderViewRootOnly=true&ajaxRequestInfo="
		"%5B%7B%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity%22%2C%22paramMap%22%3A%7B%22query%22%3A%22Dearborn%22%2C%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity%22%2C%22argIds%22%3A%22%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressIn"
		"putSet%3ACounty%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACountry%22%2C%22caretPosition%22%3A8%2C%22page%22%3A1%2C%22start%22%3A0%2C%22limit%22%3A25%2C%"
		"22additionalArgs%22%3A%5B%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22United%20States%22%5D%7D%7D%5D&csrfToken=&scrollPositions=%7B%22centerPanel%22%3A%7B%22x%22%3A0%2C%22y%22%3A332%7D%7D", 
		LAST);

	web_custom_request("PolicyCenter.do_7", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=renderViewRootOnly=true&ajaxRequestInfo="
		"%5B%7B%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity%22%2C%22paramMap%22%3A%7B%22query%22%3A%22Dearborn%20road%22%2C%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity%22%2C%22argIds%22%3A%22%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAd"
		"dressInputSet%3ACounty%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACountry%22%2C%22caretPosition%22%3A13%2C%22page%22%3A1%2C%22start%22%3A0%2C%22limit%22%"
		"3A25%2C%22additionalArgs%22%3A%5B%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22United%20States%22%5D%7D%7D%5D&csrfToken=&scrollPositions=%7B%22centerPanel%22%3A%7B%22x%22%3A0%2C%22y%22%3A332%7D%7D", 
		LAST);

	web_submit_data("PolicyCenter.do_8", 
		"Action=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=renderViewRootOnly", "Value=true", ENDITEM, 
		"Name=ajaxRequestInfo", "Value=[{\"viewRootId\":\"CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:City\",\"paramMap\":{\"CreateAccount:CreateAccountScreen:CreateAccountDV:AddressInputSet:globalAddressContainer:GlobalAddressInputSet:City_caretPosition\":13}}]", ENDITEM, 
		"Name=csrfToken", "Value=", ENDITEM, 
		"Name=scrollPositions", "Value={\"centerPanel\":{\"x\":0,\"y\":332}}", ENDITEM, 
		LAST);

	web_custom_request("PolicyCenter.do_9", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=renderViewRootOnly=true&ajaxRequestInfo="
		"%5B%7B%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode%22%2C%22paramMap%22%3A%7B%22query%22%3A%2248%22%2C%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode%22%2C%22argIds%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddres"
		"sInputSet%3ACity%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACounty%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState%2C%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACountry%22%2C%22caretPosition%22%3A2%2C%22page%22%3A1%2C%22start%22%3A0%2C%22limit%22%3A25%2C%"
		"22additionalArgs%22%3A%5B%22Dearborn%20road%22%2C%22%22%2C%22%22%2C%22%22%2C%22United%20States%22%5D%7D%7D%5D&csrfToken=&scrollPositions=%7B%22centerPanel%22%3A%7B%22x%22%3A0%2C%22y%22%3A332%7D%7D", 
		LAST);

	web_custom_request("PolicyCenter.do_10", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=renderViewRootOnly=true&ajaxRequestInfo="
		"%5B%7B%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode%22%2C%22paramMap%22%3A%7B%22query%22%3A%2248120%22%2C%22viewRootId%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode%22%2C%22argIds%22%3A%22CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAdd"
		"ressInputSet%3ACity%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACounty%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState%2C%2CCreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACountry%22%2C%22caretPosition%22%3A5%2C%22page%22%3A1%2C%22start%22%3A0%2C%22limit%22%3A25%"
		"2C%22additionalArgs%22%3A%5B%22Dearborn%20road%22%2C%22%22%2C%22%22%2C%22%22%2C%22United%20States%22%5D%7D%7D%5D&csrfToken=&scrollPositions=%7B%22centerPanel%22%3A%7B%22x%22%3A0%2C%22y%22%3A332%7D%7D", 
		LAST);

	lr_think_time(21);

	web_custom_request("PolicyCenter.do_11", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3APrefix=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AFirstName={p_FirstName}&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AMiddleInitial=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ALastName={p_FirstName}&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ASuffix=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AGender=F&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AHomePhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3ACellPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=201-345-6789&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AFaxPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APrimaryPhone=mobile&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AEmailAddress1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressLine1=3319&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressLine2=Green%20field&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType2=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity=Dearborn%20road&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACounty=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState=MI&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode=48120&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressDescription=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AOfficialIDInputSet%3AOfficialIDDV_Input=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3APrimaryLanguage=en_US&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducer=&%3Atblinks=BWZv1Vpn1tpVrdhbCvxfwYuXdPA%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar=mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&csrfToken=&scrollPositions="
		"%7B%22centerPanel%22%3A%7B%22x%22%3A0%2C%22y%22%3A392%7D%7D&eventSource=CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducer%3ASelectOrganization_act&objFocusId=CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducer", 
		LAST);

	lr_think_time(6);

	web_custom_request("PolicyCenter.do_12", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AGlobalContactNameInputSet%3AName=the%20auto%20club%20group&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AType=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType1=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType2=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3ATier=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AProducerCode=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3ABranchCode=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3APolicyNumber=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAccountNumber=&%3Atblinks=%2FVmods0IbspydjECaLhv3mo4mmg%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar=mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&csrfToken=&eventSource="
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3ASearchAndResetInputSet%3ASearchLinksInputSet%3ASearch_act&objFocusId=OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AGlobalContactNameInputSet%3AName", 
		LAST);

	web_custom_request("PolicyCenter.do_13", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AGlobalContactNameInputSet%3AName=the%20auto%20club%20group&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AType=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType1=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType2=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAddressOwnerAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3ATier=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AProducerCode=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3ABranchCode=&"
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3APolicyNumber=&OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchDV%3AAccountNumber=&%3Atblinks=Inp8DouI4ZjTzGAAuaegGvFSArk%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar=mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&csrfToken=&eventSource=OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchResultsLV%3A0%3A_Select_act&objFocusId="
		"OrganizationSearchPopup%3AOrganizationSearchPopupScreen%3AOrganizationSearchResultsLV%3A0%3A_Select", 
		LAST);

	lr_think_time(9);

	web_custom_request("PolicyCenter.do_14", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3APrefix=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AFirstName={p_FirstName}&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AMiddleInitial=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ALastName={p_FirstName}&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ASuffix=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AGender=F&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AHomePhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3ACellPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=201-345-6789&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AFaxPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APrimaryPhone=mobile&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AEmailAddress1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressLine1=3319&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressLine2=Green%20field&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType2=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity=Dearborn%20road&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACounty=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState=MI&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode=48120&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressDescription=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AOfficialIDInputSet%3AOfficialIDDV_Input=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3APrimaryLanguage=en_US&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducer=The%20Auto%20Club%20Group&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducerCode=ProducerCode%3A104&%3Atblinks=6bzWe7gmBNmPy6ff3BhrTuodk6A%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar="
		"mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&csrfToken=&scrollPositions=%7B%22centerPanel%22%3A%7B%22x%22%3A0%2C%22y%22%3A420%7D%7D&eventSource=_refresh_&eventParam=CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducerCode&objFocusId=CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducerCode", 
		LAST);

	/* click on standardize */

	lr_think_time(18);

	web_custom_request("PolicyCenter.do_15", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3APrefix=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AFirstName={p_FirstName}&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AMiddleInitial=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ALastName={p_FirstName}&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ASuffix=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AGender=F&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AHomePhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3ACellPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=201-345-6789&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AFaxPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APrimaryPhone=mobile&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AEmailAddress1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressLine1=3319&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressLine2=Green%20field&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AAddressType2=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACity=Dearborn%20road&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3ACounty=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3AState=MI&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressInputSet%3AglobalAddressContainer%3AGlobalAddressInputSet%3APostalCode=48120&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressDescription=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AOfficialIDInputSet%3AOfficialIDDV_Input=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3APrimaryLanguage=en_US&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducer=The%20Auto%20Club%20Group&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducerCode=ProducerCode%3A104&%3Atblinks=3k7nMntDM684tdK7txxYNs2%2FqhQ%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar="
		"mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&csrfToken=&eventSource=CreateAccount%3ACreateAccountScreen%3AStandardize_act&objFocusId=CreateAccount%3ACreateAccountScreen%3AStandardize", 
		LAST);

	/* select address--------------- */

	lr_think_time(12);

	web_submit_data("PolicyCenter.do_16", 
		"Action=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TabBar:AccountTab:AccountTab_AccountNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_SubmissionNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_PolicyRetrievalItem", "Value=", ENDITEM, 
		"Name=QuickJump", "Value=", ENDITEM, 
		"Name=:tblinks", "Value=/XqabbZ8ND8O79J5wjs7F5vmeSs=", ENDITEM, 
		"Name=:tabs", "Value=CXcDZmad1N6sLNcBZ0KTnJyf7vU=", ENDITEM, 
		"Name=infoBar", "Value=mfH/SDQ8L06WF3MIAQRaP+cBPtY=", ENDITEM, 
		"Name=systemAlertBar", "Value=vyGp6PvFo4RvsFtPoIWeCReyIC8=", ENDITEM, 
		"Name=csrfToken", "Value=", ENDITEM, 
		"Name=eventSource", "Value=AddressStandardize_AcgPopup:StardizationResults_AcgLV:0:select_act", ENDITEM, 
		"Name=objFocusId", "Value=AddressStandardize_AcgPopup:StardizationResults_AcgLV:0:select", ENDITEM, 
		LAST);

	/* update */

	web_revert_auto_header("Cache-Control");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Cache-Control", 
		"no-cache");

	lr_think_time(9);

	web_custom_request("PolicyCenter.do_17", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=TabBar%3AAccountTab%3AAccountTab_AccountNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_SubmissionNumberSearchItem=&TabBar%3APolicyTab%3APolicyTab_PolicyRetrievalItem=&QuickJump=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3APrefix=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AFirstName={p_FirstName}&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AMiddleInitial=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ALastName={p_FirstName}&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3ASuffix=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AGlobalPersonNameInputSet%3AGender=F&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AHomePhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3ACellPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=201-345-6789&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AFaxPhone%3AGlobalPhoneInputSet%3ANationalSubscriberNumber=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3APrimaryPhone=mobile&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3ACreateAccountContactInputSet%3AEmailAddress1=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AAddressDescription=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AOfficialIDInputSet%3AOfficialIDDV_Input=&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3APrimaryLanguage=en_US&CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducer=The%20Auto%20Club%20Group&"
		"CreateAccount%3ACreateAccountScreen%3ACreateAccountDV%3AProducerSelectionInputSet%3AProducerCode=ProducerCode%3A104&%3Atblinks=mQyS9ka8T18%2BQ7aUvqcae4LwVSc%3D&%3Atabs=CXcDZmad1N6sLNcBZ0KTnJyf7vU%3D&infoBar=mfH%2FSDQ8L06WF3MIAQRaP%2BcBPtY%3D&systemAlertBar=vyGp6PvFo4RvsFtPoIWeCReyIC8%3D&csrfToken=&eventSource=CreateAccount%3ACreateAccountScreen%3AUpdate_act&objFocusId=CreateAccount%3ACreateAccountScreen%3AUpdate", 
		LAST);

	/* logout */

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_submit_data("PolicyCenter.do_18", 
		"Action=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=TabBar:AccountTab:AccountTab_AccountNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_SubmissionNumberSearchItem", "Value=", ENDITEM, 
		"Name=TabBar:PolicyTab:PolicyTab_PolicyRetrievalItem", "Value=", ENDITEM, 
		"Name=QuickJump", "Value=", ENDITEM, 
		"Name=AccountFile:MenuLinks_toggle", "Value=", ENDITEM, 
		"Name=AccountFile_Summary:AccountFile_SummaryScreen:AccountFile_Summary_WorkOrdersLV_tb:WorkOrdersCompletenessFilter", "Value=Open", ENDITEM, 
		"Name=:tblinks", "Value=Y3fw/2K1u6ICtliLWzagOh0EJGU=", ENDITEM, 
		"Name=:tabs", "Value=ubCT1rxvZjGU5rFcZZuHkMKy82Y=", ENDITEM, 
		"Name=infoBar", "Value=lj97X9gPHo5Sf4PPeimNVymsQGk=", ENDITEM, 
		"Name=systemAlertBar", "Value=vyGp6PvFo4RvsFtPoIWeCReyIC8=", ENDITEM, 
		"Name=AccountFile:AccountFileMenuActions", "Value=uwUnZ8z90ih6Hh+fd1ZKfbli8Fc=", ENDITEM, 
		"Name=AccountFile:MenuLinks", "Value=QaLjbke39f3DRkC8lWjNYFK1jAs=", ENDITEM, 
		"Name=csrfToken", "Value=", ENDITEM, 
		"Name=eventSource", "Value=TabBar:LogoutTabBarLink_act", ENDITEM, 
		"Name=objFocusId", "Value=:TabLinkMenuButton", ENDITEM, 
		LAST);

	web_revert_auto_header("Cache-Control");

	web_add_auto_header("Accept", 
		"text/html, application/xhtml+xml, image/jxr, */*");

	web_url("ACGLogOut.html", 
		"URL=https://stdipxyvip01.aaa-acg.net/pc/resources/themes/theme-9/help/ACGLogOut.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://stdipxyvip01.aaa-acg.net/pc/PolicyCenter.do", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	/* end------------------------ */

	return 0;
}