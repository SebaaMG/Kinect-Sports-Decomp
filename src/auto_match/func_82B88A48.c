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
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD1978();
extern int fn_82B859E8();
extern int fn_82B85A88();
extern int fn_82B85B28();
extern int fn_82B85BC8();


undefined8 fn_82B88A48(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = (uint)param_1[2] >> 7 & 0x7f;
  uVar3 = 0;
  if (uVar2 == 0x3b) {
    uVar3 = fn_82B85A88(param_2,param_1[7],param_1[0xb]);
  }
  else if (uVar2 == 0x3c) {
    uVar3 = fn_82B859E8(param_2,param_1[7],param_1[0xb]);
  }
  else if (uVar2 == 0x3d) {
    uVar3 = fn_82ACA920(param_2,param_1[0xb],*(undefined4 *)(param_1[0xb] + 0xc));
    fn_82AD1270(uVar3,4);
    uVar3 = fn_82B85BC8(param_2,param_1[7],uVar3);
  }
  else if (uVar2 == 0x3e) {
    uVar3 = fn_82ACA920(param_2,param_1[0xb],*(undefined4 *)(param_1[0xb] + 0xc));
    fn_82AD1270(uVar3,4);
    uVar3 = fn_82B85B28(param_2,param_1[7],uVar3);
  }
  for (puVar1 = (uint *)*param_1; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    if ((*puVar1 & 0xe000000) == 0) {
      fn_82AD1978(uVar3,puVar1);
    }
  }
  return uVar3;
}

