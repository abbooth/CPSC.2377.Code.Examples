#ifndef I_ADDON_H
#define I_ADDON_H
#include "Drink.h"
class iAddOnDecorator:public Drink
{
public:
	float getCost() override;
private:
	Drink* addOn;
	
};
#endif // !I_ADDON_H
