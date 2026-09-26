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
extern unsigned int *auStack_70;
extern int fn_828647C0();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82865170();
extern int fn_82866418();


undefined8 fn_8286E460(int *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar5;
  int iVar4;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_70 [112];
  
  uVar6 = *param_2;
  uVar1 = param_2[1];
  bVar2 = false;
  uVar3 = fn_82864988(auStack_70,0xffffffff82021750);
  for (uVar7 = (ulonglong)uVar6; (uVar7 & 0xffffffff) != (ulonglong)uVar1; uVar7 = uVar7 + 0x24) {
    cVar5 = fn_828647C0(uVar7,uVar3);
    if (cVar5 != '\0') break;
  }
  fn_82864898(auStack_70);
  uVar6 = param_2[1];
  if (((uVar7 & 0xffffffff) == (ulonglong)uVar6) || ((uVar7 & 0xffffffff) == (ulonglong)*param_2)) {
    for (uVar7 = (ulonglong)*param_2; (uVar7 & 0xffffffff) != (ulonglong)uVar6; uVar7 = uVar7 + 0x24
        ) {
      iVar4 = (**(code **)(*param_1 + 0xc))(param_1,uVar7,param_3);
      if (iVar4 < 0) {
        fn_82865170();
        fn_82866418();
        bVar2 = true;
      }
      uVar6 = param_2[1];
    }
    uVar3 = 0xffffffffa0100000;
    if (!bVar2) {
      uVar3 = 0x20100000;
    }
  }
  else {
    uVar3 = 0xffffffffa0100000;
  }
  return uVar3;
}

