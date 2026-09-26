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
extern int fn_82AD18C0();
extern int fn_82B47660();
extern int fn_82B479B0();
extern int fn_82B47AA0();
extern int fn_82B49CC0();
extern int fn_82B4BC48();


ulonglong fn_82B4E898(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint *puVar5;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  for (; (param_4 & 0xffffffff) != 0; param_4 = param_4 - uVar7) {
    uVar7 = param_4;
    if (3 < (param_4 & 0xffffffff)) {
      uVar7 = 4;
    }
    puVar5 = (uint *)fn_82B4BC48(param_1,param_2,uVar7,1,1);
    uVar1 = fn_82B4BC48(param_1,param_3,uVar7,0,1);
    uVar2 = fn_82B47AA0(param_1,puVar5,uVar1);
    uVar4 = uVar2;
    if ((*puVar5 & 0xe000000) != 0x2000000) {
      uVar1 = fn_82AD18C0(param_1,uVar2,1);
      uVar3 = fn_82AD18C0(param_1,uVar2,0);
      uVar4 = fn_82B479B0(param_1,uVar3,uVar1);
      if (0x4000000 < (*puVar5 & 0xe000000)) {
        uVar1 = fn_82AD18C0(param_1,uVar2,2);
        uVar3 = fn_82AD18C0(param_1,uVar4,0);
        uVar4 = fn_82B479B0(param_1,uVar3,uVar1);
      }
      if (0x6000000 < (*puVar5 & 0xe000000)) {
        uVar1 = fn_82AD18C0(param_1,uVar2,3);
        uVar3 = fn_82AD18C0(param_1,uVar4,0);
        uVar4 = fn_82B479B0(param_1,uVar3,uVar1);
      }
    }
    if ((uVar6 & 0xffffffff) != 0) {
      uVar4 = fn_82B49CC0(param_1,uVar6,uVar4);
    }
    fn_82B47660(param_2,uVar7);
    uVar6 = uVar4;
  }
  return uVar6;
}

