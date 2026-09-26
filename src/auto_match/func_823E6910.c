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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82368CD8();
extern int fn_823D9D60();
extern int fn_823E7FB8();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_823E6910(int param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  uVar2 = fn_823D9D60(param_1,0);
  uVar2 = fn_823D9D60(uVar2,1);
  uStack_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  uStack_50 = 0xffffffff;
  fn_82368CD8(uVar2,auStack_30,auStack_40,auStack_60,&uStack_58);
  if ((((*(int *)(param_1 + 0x54) == 9) || (*(int *)(param_1 + 0x54) == 10)) ||
      (*(int *)(param_1 + 0x58) == 0xb)) || (bVar1 = false, *(int *)(param_1 + 0x58) == 0xc)) {
    bVar1 = true;
  }
  fn_823E7FB8(param_2,&uStack_58,!bVar1,*(undefined4 *)(param_1 + 8),param_1 + 0xc,
                    param_1 + 0x1090);
  return;
}

