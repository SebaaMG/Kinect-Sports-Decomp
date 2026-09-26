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
extern unsigned int *auStack_60;
extern int fn_82822F60();
extern int fn_828233A8();
extern int fn_828252E8();
extern int fn_828299A8();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_6c;


void fn_8282BA08(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  undefined1 auStack_60 [16];
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_4 != 1) {
    piVar3 = (int *)(param_2 + param_3);
    uStack_6c = 0;
    piStack_70 = piVar3;
    fn_828299A8(&piStack_70,param_1,&iStack_7c);
    uVar1 = uStack_6c;
    if (cStack_68 == '\0') {
      if (((param_4 == 4) && (piStack_70 = (int *)*piVar3, piStack_70 != (int *)0x0)) &&
         (fn_828299A8(&piStack_70,param_1,&iStack_78), iStack_78 != 0)) {
        uStack_44 = uVar1;
        uStack_4c = *(undefined4 *)(iStack_7c + 0xc);
        uStack_48 = *(undefined4 *)(iStack_78 + 0xc);
        piStack_50 = piVar3;
        fn_828233A8(param_1 + 0x344,&iStack_74,0xffffffff8282af88,auStack_60);
        if (iStack_74 != 0) {
          return;
        }
      }
      iStack_80 = fn_828252E8(param_1,0x28);
      *(int **)(iStack_80 + 0x18) = piVar3;
      *(int *)(iStack_80 + 0x20) = param_4;
      *(undefined4 *)(iStack_80 + 0x10) = *(undefined4 *)(iStack_7c + 0xc);
      *(undefined4 *)(iStack_80 + 0x14) = uVar1;
      *(undefined4 *)(iStack_80 + 0x1c) = param_6;
      *(undefined4 *)(iStack_80 + 0x24) = param_5;
      iVar2 = fn_82822F60(param_1 + 0x318,iStack_80,0xffffffff8282b948,&iStack_80);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
    }
  }
  return;
}

