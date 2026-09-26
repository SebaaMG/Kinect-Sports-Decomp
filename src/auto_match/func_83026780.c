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
extern unsigned int *auStack_38;
extern int fn_8303A128();
extern int fn_8303A178();
extern int fn_8303A350();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_83026780(int param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [14];
  
  iVar5 = param_1 + 0x10;
  fn_8303A350((double)*(float *)(*(int *)(param_1 + 0xb0) + 8),iVar5);
  uStack_40 = *param_2;
  fn_8303A178(iVar5,&uStack_40);
  uVar4 = 0x2d;
  uStack_3c = 0;
  do {
    if (uStack_40 == 0) goto LAB_83026888;
    if ((*(short *)(param_1 + 0x6e) == 0) && (*(char *)(param_1 + 0xb8) == '\0')) {
      auStack_38[0] = (uint)*(ushort *)(param_1 + 0xbe);
      uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),auStack_38);
      if ((int)uVar1 != 0x2d) {
        if ((int)uVar1 != 0x11) {
          return uVar1;
        }
        *(undefined1 *)(param_1 + 0xb8) = 1;
      }
      *(short *)(param_1 + 0x6e) = (short)auStack_38[0];
    }
    uVar2 = (uint)*(ushort *)(param_1 + 0x6e);
    uVar3 = uStack_40;
    if (uVar2 <= uStack_40) {
      uVar3 = uVar2;
    }
    uStack_40 = uStack_40 - uVar3;
    uStack_3c = uVar3 + uStack_3c;
    *(short *)(param_1 + 0x6e) = (short)(uVar2 - uVar3);
  } while (((uVar2 - uVar3 & 0xffff) != 0) || (*(char *)(param_1 + 0xb8) == '\0'));
  uVar4 = 0x11;
LAB_83026888:
  fn_8303A128(iVar5,&uStack_3c);
  *param_2 = uStack_3c;
  return uVar4;
}

