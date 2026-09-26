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
extern int fn_82C107F8();
extern int fn_82C4D9B8();
extern int fn_82C4DC18();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_82C3D490(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int aiStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*param_4 != 0) {
    return 0;
  }
  if (param_2 != 0x80000) {
    return 0xffffffff805000b2;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  aiStack_70[0] = 0;
  uStack_60 = 0xc;
  uStack_5c = 1;
  uStack_58 = 2;
  uStack_54 = 3;
  uStack_50 = 4;
  uStack_4c = 5;
  uStack_48 = 6;
  uStack_44 = 7;
  uStack_40 = 8;
  uStack_3c = 9;
  uStack_38 = 10;
  uStack_34 = 0xb;
  uVar2 = fn_82C4D9B8(param_3,*(undefined4 *)(param_1 + 0x1084),&uStack_60,0xc,param_1 + 100,
                          (undefined4 *)(param_1 + 0x68),aiStack_70);
  if ((((-1 < (int)uVar2) &&
       (uVar2 = fn_82C4DC18(param_3,*(undefined4 *)(param_1 + 0x1084),
                                *(undefined4 *)(param_1 + 0x68),param_1 + 0x20,param_1 + 0x24,
                                param_1 + 0x6c,aiStack_70), -1 < (int)uVar2)) &&
      (uVar2 = fn_82C107F8(*(undefined4 *)(param_1 + 0x1084),uVar1,0x90000,0), -1 < (int)uVar2
      )) && (aiStack_70[0] != 0)) {
    uVar2 = 0x500009;
  }
  return uVar2;
}

