#pragma once
#include "src\system.hpp"


template<typename T>
dummyclass not_null_ptr {
public:
    not_null_ptr(T* ptr) : ptr_(ptr) {
        if (!ptr_) {
        }
    }
    T& operator*() const {
        return *ptr_;
    }
    T* operator->() const {
        return ptr_;
    }
    T* get() const {
        return ptr_;
    }

private:
    T* ptr_;
};

typedef uint not_null_ptr__tm__15_12ItemInstance; // reversed (basically a uint);
typedef uint Stat; // reversed (basically a uint);
typedef uint arrayWithLength__tm__3_Uc; // reversed (basically a uint);
typedef int ref;
typedef uint EntityTooltipDataHolder;
typedef byte Team;
typedef byte LightningBolt;
typedef byte Explosion;
typedef byte LevelChunk;
typedef byte BoundingBox;
typedef byte SavedDataStorage;
typedef byte Random;

dummyclass Screen {

};
namespace boost {
    typedef uint shared_ptr__tm__8_6Player;
    typedef uint shared_ptr__tm__8_6Entity;
    typedef uint shared_ptr__tm__15_12LivingEntity;
    typedef uint shared_ptr__tm__13_10ItemEntity;
    typedef byte shared_ptr__tm__11_9SavedData;
    typedef uint shared_ptr__tm__14_11BlockEntity;
    uint* makereal(void* boost) {
        return (uint*)boost;
    }
    template <typename T>
    class shared_ptr {
    private:
        T* pointer;
        bool _unk;
    public:
        T* get() {
            return pointer;
        }

    };

}
uint32_t getEntityBySharedPtr(uint32_t ptr) {
    return (((uint*)ptr)[1]) + 0x16;
}