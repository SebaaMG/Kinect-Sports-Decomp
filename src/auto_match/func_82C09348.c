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
extern int fn_82C06CB0();
extern int fn_82C07C18();
extern int fn_82C10F40();


undefined8 fn_82C09348(int param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte abStack_40 [4];
  int aiStack_3c [15];
  
  abStack_40[0] = 0xff;
  aiStack_3c[0] = 0;
  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) || ((int)param_4 < -2)) ||
     (((4 < (int)param_4 || (param_3 == (uint *)0x0)) || (*(int *)(param_1 + 0x210) == 0)))) {
    uVar2 = 4;
  }
  else {
    *param_2 = 0xff;
    uVar1 = fn_82C06CB0(param_1,param_3,param_4,abStack_40);
    if (((-1 < (int)uVar1) || ((uVar1 & 0xffffffff) == 0x80600005)) ||
       ((uVar1 & 0xffffffff) == 0x80600008)) {
      *param_2 = (uint)abStack_40[0];
      if (((abStack_40[0] != 0xff) && (*param_3 != 0)) &&
         (fn_82C10F40(*(undefined4 *)(*(int *)(param_1 + 4) + 0x7c),abStack_40[0],aiStack_3c),
         *(int *)(aiStack_3c[0] + 4) == 1)) {
        uVar4 = (uint)*(ushort *)(*(int *)(aiStack_3c[0] + 8) + 0xe) *
                (uint)*(ushort *)(*(int *)(aiStack_3c[0] + 8) + 2);
        uVar3 = (longlong)((int)uVar4 >> 3) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 7) != 0);
        trapWord(6,uVar3,0);
        *param_3 = (uint)((ulonglong)*param_3 / (uVar3 & 0xffffffff));
      }
      if ((int)uVar1 == 0x500004) {
        return 0x21;
      }
    }
    if (((uVar1 & 0xffffffff) == 0x80500000) || ((uVar1 & 0xffffffff) == 0x8050000b)) {
      *param_2 = 0;
      uVar2 = 0x23;
      *param_3 = 0;
    }
    else {
      uVar2 = fn_82C07C18(uVar1);
    }
  }
  return uVar2;
}

