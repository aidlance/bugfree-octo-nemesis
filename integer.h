#ifndef __INTEGER_H__
#define __INTEGER_H__

#include <stdint.h>

enum
{
    HIGH,
    LOW
};

typedef union IntegerParts
{
    uint64_t u64;
    int64_t  s64;
    uint32_t u32[2];
    uint16_t u16[4];
    uint8_t  u8[8];
    struct 
    {
        uint32_t low;
        uint32_t high : 31;
        uint32_t sign : 1;
    };
} IntegerParts;

typedef struct Integer
{
    IntegerParts *number;
    uint32_t size;
};

Integer addInteger(const Integer *i1, const Integer *i2);
Integer addInt32(const Integer *i1, uint32_t i2);
Integer addInt64(const Integer *i1, uint64_t i2);

Integer subInteger(const Integer *i1, const Integer *i2);
Integer subInt32(const Integer *i1, uint32_t i2);
Integer subInt64(const Integer *i1, uint64_t i2);

Integer multInteger(const Integer *i1, const Integer *i2);
Integer multInt32(const Integer *i1, uint32_t i2);
Integer multInt64(const Integer *i1, uint64_t i2);

Integer divInteger(const Integer *i1, const Integer *i2);
Integer divInt32(const Integer *i1, uint32_t i2);
Integer divInt64(const Integer *i1, uint64_t i2);

Integer modInteger(const Integer *i1, const Integer *i2);
Integer modInt32(const Integer *i1, uint32_t i2);
Integer modInt64(const Integer *i1, uint64_t i2);

Integer expInteger(const Integer *i1, const Integer *i2);
Integer expInt32(const Integer *i1, uint32_t i2);
Integer expInt64(const Integer *i1, uint64_t i2);

void addEqInteger(Integer *i1, const Integer *i2);
void addEqInt32(Integer *i1, uint32_t i2);
void addEqInt64(Integer *i1, uint64_t i2);

void subEqInteger(Integer *i1, const Integer *i2);
void subEqInt32(Integer *i1, uint32_t i2);
void subEqInt64(Integer *i1, uint64_t i2);

void multEqInteger(Integer *i1, const Integer *i2);
void multEqInt32(Integer *i1, uint32_t i2);
void multEqInt64(Integer *i1, uint64_t i2);

void divEqInteger(Integer *i1, const Integer *i2);
void divEqInt32(Integer *i1, uint32_t i2);
void divEqInt64(Integer *i1, uint64_t i2);

void modEqInteger(Integer *i1, const Integer *i2);
void modEqInt32(Integer *i1, uint32_t i2);
void modEqInt64(Integer *i1, uint64_t i2);

void expEqInteger(Integer *i1, const Integer *i2);
void expEqInt32(Integer *i1, uint32_t i2);
void expEqInt64(Integer *i1, uint64_t i2);

double toDouble(const Integer *integer);
float toFloat(const Integer *integer);
uint8_t toUint8(const Integer *integer);
uint16_t toUint16(const Integer *integer);
uint32_t toUint32(const Integer *integer);
uint64_t toUint64(const Integer *integer);
int8_t toInt8(const Integer *integer);
int16_t toInt16(const Integer *integer);
int32_t toInt32(const Integer *integer);
int64_t toInt64(const Integer *integer);


#endif /* __INTEGER_H__ */
