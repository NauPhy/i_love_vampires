#include "BaseAttributeWrapper.h"
#include "Definitions.h"

template<typename attrType, typename dataType>
BaseAttributeWrapper<attrType, dataType>::BaseAttributeWrapper() {
	LOGERROR("BaseAttributeWrapper::BaseAttributeWrapper - default constructor should not be used");
}