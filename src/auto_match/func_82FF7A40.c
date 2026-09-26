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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB60A0();
extern int fn_82FF78F8();
extern int fn_83013B98();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;


undefined8 fn_82FF7A40(int param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  
  for (puVar6 = *(uint **)(param_1 + 4);
      (puVar6 != *(uint **)(param_1 + 8) && ((ulonglong)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 2) {
  }
  uVar1 = (uint)(*(uint **)(param_1 + 8) != puVar6);
  if ((-(uint)(uVar1 != 0) & (uint)(puVar6 + 1)) == 0) {
    puVar4 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x48,param_3,-uVar1);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 2;
    }
    else {
      puVar4[1] = 0;
      *puVar4 = &lbl_8217D040;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xe] = 0xffffffff;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      uVar3 = fn_82FB60A0(puVar4 + 7,0xc,0xffffffffffffffff,lbl_831BC768);
      if ((int)uVar3 == 1) {
        iVar5 = fn_83013B98(param_1 + 4,param_2,puVar4);
        if (iVar5 != 0) {
          return uVar3;
        }
        uVar3 = 2;
      }
      fn_82FF78F8(puVar4);
      uVar2 = lbl_831BC768;
      (**(code **)*puVar4)(puVar4,0);
      fn_82FA5190(uVar2,puVar4);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

