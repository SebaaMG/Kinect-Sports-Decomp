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
extern unsigned int *auStack_68;
extern int fn_8263AB38();
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_8263B230(ulonglong param_1,int param_2,int param_3,int param_4,int param_5,int param_6
                      ,int param_7,uint *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *in_stack_00000054;
  int *in_stack_0000005c;
  uint uStack_70;
  uint uStack_6c;
  uint auStack_68 [26];
  
  auStack_68[2] = 0;
  auStack_68[3] = 0;
  auStack_68[4] = 0;
  bVar1 = (&lbl_821CBFB1)[param_7 * 2];
  fn_8263AB38(param_7,&uStack_70,&uStack_6c);
  uVar2 = -(uint)(0x20U - LZCOUNT(param_3 + -1) < 0x20U - LZCOUNT(param_2 + -1)) & 1;
  if ((param_1 & 0xffffffff) < 3) {
    auStack_68[uVar2 + 2] = 0x10 >> ((uint)param_1 & 0x3f);
  }
  else {
    uVar3 = uVar2 * 4 ^ 4;
    uVar2 = *(uint *)((int)auStack_68 + uVar3) >> ((uint)param_1 - 2 & 0x3f);
    *(uint *)((int)auStack_68 + uVar3 + 8) = uVar2;
    if (uVar2 < 4) {
      param_1 = (0x20 - LZCOUNT(param_4 + -1)) - param_1;
      if ((param_1 & 0xffffffff) < 2) {
        param_1 = 1;
      }
      auStack_68[4] = (uint)((param_1 & 0xffffffff) << 2);
    }
  }
  trapWord(6,(ulonglong)uStack_70,0);
  *param_8 = auStack_68[2] / uStack_70;
  *in_stack_00000054 = auStack_68[3] / uStack_6c;
  *in_stack_0000005c = auStack_68[4];
  trapWord(6,(ulonglong)uStack_6c,0);
  return (((longlong)(int)(uStack_70 * bVar1) * (longlong)(int)auStack_68[2] & 0xffffffffU) >> 3) +
         (longlong)(int)auStack_68[3] * (longlong)param_5 +
         (longlong)(int)auStack_68[4] * (longlong)param_6;
}

