
#include "MagicalContainer.hpp"

void MagicalContainer::addElement(int num) {
    this->container.emplace_back(num);
    // lower bound checks for the element that is not the less of the num given
    auto it = std::lower_bound(ordered.begin(), ordered.end(), num);
    ordered.insert(it, num);
}

void MagicalContainer::removeElement(int num) {
   return;
}

size_t MagicalContainer::size() const {
    return this->container.size();
}
