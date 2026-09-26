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
extern int fn_8251F720();
extern int fn_82522D98();
extern int fn_82837D98();
extern int fn_8284C860();


void fn_8256B080(undefined4 *param_1,int param_2,int param_3)

{
  int iVar2;
  char cVar3;
  ulonglong uVar1;
  ulonglong uVar4;
  int aiStack_30 [12];
  
  *(undefined4 *)(param_3 + 0x18) = *param_1;
  if (param_2 == 0) {
    iVar2 = fn_8251F720(param_3 + 0x18,0);
    *(int *)(param_3 + 8) = iVar2;
    uVar4 = 0;
    cVar3 = fn_8284C860(*(undefined4 *)(iVar2 + 0x14));
    if (cVar3 != '\0') {
      do {
        fn_82837D98(*(undefined4 *)(iVar2 + 0x14),uVar4,aiStack_30);
        uVar4 = uVar4 + 1;
        *(uint *)(aiStack_30[0] + 0x2c) = *(uint *)(aiStack_30[0] + 0x2c) & 0xffffffc3 | 4;
        uVar1 = fn_8284C860(*(undefined4 *)(iVar2 + 0x14));
      } while ((uVar4 & 0xffffffff) < (uVar1 & 0xff));
    }
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(*(int *)(param_3 + 8) + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0xc);
}

