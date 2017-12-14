#pragma once
#include "PlatformHelpers.h"
#include "SchemaStub.hpp"

namespace MAT = Microsoft::Applications::Events ;

namespace Microsoft {
    namespace Applications {
        namespace Events  {
            namespace Windows
            {
                public ref class EventProperties sealed
                {
                public:
                    EventProperties();
                    EventProperties(String^ name);
                    
                    property String^ Name;
                    property String^ Type;
                    property DateTime Timestamp;
                    property EventPriority Priority;
					property UINT64 PolicyBitFlags;

                    property EditablePropertyMap^ Properties;
                    property EditableMeasurementMap^ Measurements;
                    property PlatfromEditableMap<String^, PiiKind>^ PIITags;

                    bool SetProperty(String^ key, String^ value);
                    bool SetProperty(String^ key, String^ value, PiiKind piiKind);

                    bool SetType(String^ type);
                    String^ GetEventType();

                internal:
                    void PopulateEventProperties(MAT::EventProperties & propertiesCore);
                    EventProperties(String^ eventName, PropertyMap^ properties, MeasurementMap^ measurements);
                    EventProperties(const MAT::EventProperties& propertiesCore);

                private:
                    // Delegating constructors are available starting from C++11.
                    void Init(String^ name);
                };
            }
        }
    }
}