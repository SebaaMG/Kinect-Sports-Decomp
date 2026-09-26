typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern int fn_82F4EFF8();
extern V16 vectorCompareGreaterThanFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82462D48(int param_1)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  byte bVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_20 [16];
  
  bVar4 = (*(int *)(param_1 + 0x270) < 0) << 3;
  if (*(int *)(param_1 + 0x270) != 0) {
    iVar2 = fn_82F4EBC0(0);
    if (iVar2 == 0) {
      return 0;
    }
    fn_82F4EBC0(0);
    cVar3 = fn_82F4EFF8();
    if (cVar3 == '\0') {
      return 0;
    }
    uVar1 = fn_82F4EBC0(0);
    fn_82F4EEC0(auStack_20,uVar1);{ V16 _vt0 = vectorCompareGreaterThanFloatingPoint(in_vs32,in_vs44); memcpy(auVar5, &_vt0, 16); }
    if ((!(bool)(bVar4 >> 3 & 1)) ||
       (vectorCompareGreaterThanFloatingPoint(auVar5,in_vs32), !(bool)(bVar4 >> 3 & 1))) {
      return 0;
    }
  }
  return 1;
}

