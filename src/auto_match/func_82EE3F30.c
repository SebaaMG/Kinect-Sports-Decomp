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
extern int fn_82E3BCC8();
extern int fn_82E4FE40();
extern int fn_82EE3128();
extern int fn_82EE34E0();
extern int fn_82EE3630();
extern int fn_82EE3730();
extern int fn_82F37588();
extern unsigned int iStack_4c;


undefined8 fn_82EE3F30(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xb0) != 0) {
      do {
        fn_82EE3630(param_1 + 0x48,uVar3,&piStack_50);
        iVar1 = *piStack_50;
        if (iVar1 != 0) {
          uVar4 = 0;
          if (*(int *)(iVar1 + 0x100) != 0) {
            do {
              fn_82EE34E0(iVar1 + 0x44,uVar4,&iStack_4c);
              if (*(int *)(iStack_4c + 4) != 0) {
                fn_82EE34E0(iVar1 + 0x44,uVar4,aiStack_48);
                if (*(int *)(aiStack_48[0] + 4) != 0) {
                  fn_82E4FE40();
                }
              }
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x100));
          }
          fn_82EE3128(iVar1 + 0x44,0);
          *(undefined4 *)(iVar1 + 0x100) = 0;
          fn_82E3BCC8(iVar1,0);
          *(undefined4 *)(iVar1 + 0x40) = 0;
          fn_82EE3730(iVar1);
          fn_82E4FE40(iVar1);
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xb0));
    }
    fn_82F37588(param_1 + 0x48,0);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x170) != 0) {
      do {
        fn_82EE34E0(param_1 + 0xb4,uVar3,aiStack_48);
        if (*(int *)(aiStack_48[0] + 4) != 0) {
          fn_82EE34E0(param_1 + 0xb4,uVar3,&iStack_4c);
          if (*(int *)(iStack_4c + 4) != 0) {
            fn_82E4FE40();
          }
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x170));
    }
    fn_82EE3128(param_1 + 0xb4,0);
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return uVar2;
}

