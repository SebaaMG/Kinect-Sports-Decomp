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
extern int fn_82AB15D0();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern int fn_82AB76C0();
extern int fn_82B6C7D0();


undefined8 fn_82AB7718(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar3;
  uint uVar6;
  bool bVar7;
  
  bVar7 = true;
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x5fd);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820d6be8,0x5fe);
  }
  lVar1 = fn_82AB76C0(param_1);
  if (lVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6f70,0xffffffff820d6be8,0x61d);
  }
  lVar2 = fn_82AB63F8(lVar1);
  do {
    if (lVar2 == 0) {
      return 1;
    }
    puVar4 = (uint *)fn_82AB67A8(lVar2);
    if (puVar4 == (uint *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6f64,0xffffffff820d6be8,0x625);
    }
    uVar6 = *puVar4;
    if (uVar6 == 0) {
      uVar3 = fn_82B6C7D0(puVar4[1],puVar4[2],param_2);
      bVar7 = puVar4[3] == uVar3;
LAB_82ab786c:
      if (!bVar7) {
        return 0;
      }
    }
    else {
      if (uVar6 == 1) {
        uVar5 = fn_82AB6EC0(param_2,puVar4[1]);
        uVar6 = puVar4[2];
      }
      else {
        if (2 < uVar6) goto LAB_82ab786c;
        uVar5 = fn_82AB71F0(param_2,puVar4[1],puVar4[2]);
        uVar6 = puVar4[3];
      }
      if (uVar5 != uVar6) {
        return 0;
      }
      bVar7 = true;
    }
    lVar2 = fn_82AB66F8(lVar1,lVar2);
  } while( true );
}

