#pragma once

// TODO: Replace with actual Bond-generated interfaces.
namespace Microsoft {
	namespace Applications {
		namespace Events  {
			namespace Windows
			{
                /// <summary>
                /// Levels of trace events that represents printf style logging generated by an application
                /// </summary>
                public enum class TraceLevel
                {
                    /// <summary>No Tracing.</summary>
                    None = 0,
                    /// <summary>Errors.</summary>
                    Error = 1,
                    /// <summary>Warnings.</summary>
                    Warning = 2,
                    /// <summary>Informational messages.</summary>
                    Information = 3,
                    /// <summary>Trace messages.</summary>
                    Verbose = 4
                };

                /// <summary>
                /// User's state to report (final values TBD)
                /// </summary>
                public enum class UserState
                {
                    /// <summary>Connected: user is connected to a service. </summary>
                    Connected,
                    /// <summary>Reachable: user is reachable for a service like push notification. </summary>
                    Reachable,
                    /// <summary>SignedIn: user is signed in.</summary>
                    SignedIn,
                    /// <summary>SignedOut: user is signed out.</summary>
                    SignedOut
                };


				public enum class SessionState
				{
					/// <summary>Session started.</summary>
					Session_Started = 0,
					/// <summary>Session ended.</summary>
					Session_Ended = 1,
				};

                public enum class TransmitProfile
                {
                    /// <summary>Favors low transmission latency, but might consume more data bandwidth and power.</summary>
                    RealTime = 0,
                    /// <summary>Favors near real-time transmission latency. Automatically balances transmission
                    /// latency with data bandwidth and power consumption.</summary>
                    NearRealTime,
                    /// <summary>Favors device performance by conserving both data bandwidth and power consumption.</summary>
                    BestEffort,
                };

				public enum class EventPriority
				{
                    /// <summary>The event priority is not specified.</summary>
					Unspecified = -1,
                    /// <summary>The event will not be transmitted.</summary>
					Off = 0,
                    /// <summary>low priority.</summary>
					Low = 1,
                    /// <summary>Normal priority.</summary>
					Normal = 2,
                    /// <summary>High priority.</summary>
					High = 3
				};

				/// Types listed below are generalized logical concepts.
				/// Each type may corresponds to multiple raw action types
				/// E.g. Click can be from LButtonDown or TouchTap
				/// They are commonly used to identify user engagement on the page. 
				public enum class ActionType
				{
                    /// <summary>The action type is unspecified.</summary>
                    Unspecified = 0,
                    /// <summary>The action type is unknown.</summary>
                    Unknown = 1,
                    /// <summary>The action type is other.</summary>
                    Other = 2,
                    /// <summary>A mouse click.</summary>
                    Click = 3,
                    /// <summary>A pan.</summary>
                    Pan = 5,
                    /// <summary>A zoom.</summary>
                    Zoom = 6,
                    /// <summary>A hover.</summary>
                    Hover = 7
				};

				/// <summary>
				/// Api Types of an operation such as ServiceApi or ClientProxy
				/// </summary.
				public enum class ApiType
				{
                    /// <summary>No API type.</summary>
                    None = 0,
                    /// <summary>Service API.</summary>
                    ServiceApi = 1,
                    /// <summary>Client proxy API.</summary>
                    ClientProxy = 2
				};

				/// <summary>
				/// AggregateType indicates the type of aggregated metric being reported
				/// </summary>
				public enum class AggregateType
				{
                    /// <summary>The arithmetic sum.</summary>
                    Sum = 0,
                    /// <summary>The maximum.</summary>
                    Maximum = 1,
                    /// <summary>The minimum.</summary>
                    Minimum = 2,
                    /// <summary>The sum of the squares used to calculate the variance.</summary>
                    SumOfSquares = 3
				};

				/// This enum corresponds to a physical action that user has performed. 
				public enum class RawActionType
				{
                    /// <summary>Raw action type unspecified.</summary>
                    Unspecified = 0,
                    /// <summary>Raw action type unknown.</summary>
                    Unknown = 1,
                    /// <summary>Raw action type other.</summary>
                    Other = 2,
                    /// <summary>Left button double-click.</summary>
                    LButtonDoubleClick = 11,
                    /// <summary>Left button down.</summary>
                    LButtonDown = 12,
                    /// <summary>Left button up.</summary>
                    LButtonUp = 13,
                    /// <summary>Middle button double-click.</summary>
                    MButtonDoubleClick = 14,
                    /// <summary>Middle button down.</summary>
                    MButtonDown = 15,
                    /// <summary>Middle button up.</summary>
                    MButtonUp = 16,
                    /// <summary>Mouse hover.</summary>
                    MouseHover = 17,
                    /// <summary>Mouse wheel.</summary>
                    MouseWheel = 18,
                    /// <summary>Mouse move.</summary>
                    MouseMove = 20,
                    /// <summary>Right button double-click.</summary>
                    RButtonDoubleClick = 22,
                    /// <summary>Right button down.</summary>
                    RButtonDown = 23,
                    /// <summary>Right button up.</summary>
                    RButtonUp = 24,
                    /// <summary>Touch tap.</summary>
                    TouchTap = 50,
                    /// <summary>Touch double-tap.</summary>
                    TouchDoubleTap = 51,
                    /// <summary>Touch long-press.</summary>
                    TouchLongPress = 52,
                    /// <summary>Touch scroll.</summary>
                    TouchScroll = 53,
                    /// <summary>Touch pan.</summary>
                    TouchPan = 54,
                    /// <summary>Touch flick.</summary>
                    TouchFlick = 55,
                    /// <summary>Touch pinch.</summary>
                    TouchPinch = 56,
                    /// <summary>Touch zoom.</summary>
                    TouchZoom = 57,
                    /// <summary>Touch rotate.</summary>
                    TouchRotate = 58,
                    /// <summary>Keyboard press.</summary>
                    KeyboardPress = 100,
                    /// <summary>Keyboard Enter.</summary>
                    KeyboardEnter = 101
                };

				public enum class InputDeviceType
				{
                    /// <summary>Device type unspecified.</summary>
                    Unspecified = 0,
                    /// <summary>Device type unknown.</summary>
                    Unknown = 1,
                    /// <summary>Other.</summary>
                    Other = 2,
                    /// <summary>Mouse.</summary>
                    Mouse = 3,
                    /// <summary>Keyboard.</summary>
                    Keyboard = 4,
                    /// <summary>Touch.</summary>
                    Touch = 5,
                    /// <summary>Stylus.</summary>
                    Stylus = 6,
                    /// <summary>Microphone.</summary>
                    Microphone = 7,
                    /// <summary>Kinect.</summary>
                    Kinect = 8,
                    /// <summary>Camera.</summary>
                    Camera = 9
				};

				public enum class AppLifeCycleState
				{
                    /// <summary>Lifecycle state unknown.</summary>
                    Unknown = 0,
                    /// <summary>The application launched.</summary>
                    Launch = 1,
                    /// <summary>The application exited.</summary>
                    Exit = 2,
                    /// <summary>The application suspended.</summary>
                    Suspend = 3,
                    /// <summary>The application resumed.</summary>
                    Resume = 4,
                    /// <summary>The application came back into the foreground.</summary>
                    Foreground = 5,
                    /// <summary>The application went into the background.</summary>
                    Background = 6
				};

				/// <summary>
				/// PII (Personal Identifiable Information) kind used to indicate an event property value
				/// </summary>
				public enum class PiiKind
				{
                    /// <summary>No PII kind.</summary>
                    None = 0,
                    /// <summary>An LDAP distinguished name.</summary>
                    DistinguishedName = 1,
                    /// <summary>Generic data.</summary>
                    GenericData = 2,
                    /// <summary>An IPV4 Internet address.</summary>
                    IPv4Address = 3,
                    /// <summary>An IPV6 Internet address.</summary>
                    IPv6Address = 4,
                    /// <summary>An e-mail subject.</summary>
                    MailSubject = 5,
                    /// <summary>A telephone number.</summary>
                    PhoneNumber = 6,
                    /// <summary>A query string.</summary>
                    QueryString = 7,
                    /// <summary>A SIP address</summary>
                    SipAddress = 8,
                    /// <summary>An e-mail address.</summary>
                    SmtpAddress = 9,
                    /// <summary>An identity.</summary>
                    Identity = 10,
                    /// <summary>A uniform resource indicator.</summary>
                    Uri = 11,
                    /// <summary>A fully-qualified domain name.</summary>
                    Fqdn = 12,
                    /// <summary>A legacy IPV4 Internet address.</summary>
                    IPv4AddressLegacy = 13
				};
			}
		}
	}
}

namespace Microsoft {
	namespace Applications
	{
		// Bringing enums defined in the public namespace.
		// TODO: align with the ACT enums.
		typedef Events ::Windows::ActionType ActionType;
		typedef Events ::Windows::InputDeviceType InputDeviceType;
		typedef Events ::Windows::AppLifeCycleState AppLifeCycleState;
		typedef Events ::Windows::RawActionType RawActionType;
		typedef Events ::Windows::EventPriority EventPriority;
		
		enum class NetworkType
		{
            /// <summary>The type of network is unknown.</summary>
            Unknown = 0,
            /// <summary>A wired network.</summary>
            Wired = 1,
            /// <summary>A Wi-fi network.</summary>
            Wifi = 2,
            /// <summary>A wireless wide-area network.</summary>
            WWAN = 3,
		};

		enum class OsArchitectureType
		{
            /// <summary>The OS architecture is either unknown or is unavailable.</summary>
            Unknown = 0,
            /// <summary>32-bit (x86) mode.</summary>
            X86 = 1,
            /// <summary>64-bit (x64) mode.</summary>
            X64 = 2,
            /// <summary>ARM processor family.</summary>
            Arm = 3,
		};

		enum class NetworkCost
		{
            /// <summary>Network cost unknown.</summary>
            Unknown = 0,
            /// <summary>Unmetered.</summary>
            Unmetered = 1,
            /// <summary>Metered.</summary>
            Metered = 2,
            /// <summary>[deprecated]: Do no use this value.</summary>
            OverDataLimit = 3,
		};
	}
}
