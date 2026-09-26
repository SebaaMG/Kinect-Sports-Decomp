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
extern int fn_822315A0();
extern int fn_82359070();
extern int fn_8248F890();
extern int fn_82522588();
extern unsigned int iStack_2c;
extern unsigned int lbl_821BEBF4;
extern unsigned int lbl_831D1AD0;
extern unsigned int lbl_831D1AD4;
extern unsigned int lbl_831D1AD8;


void fn_8236C120(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0x50);
  }
  if (iVar6 != 0) {
    for (uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
        (uVar7 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34); uVar7 = uVar7 + 8) {
      piVar4 = (int *)fn_82522588(auStack_30,uVar7);
      iVar6 = *piVar4;
      *(undefined4 *)(iVar6 + 0x3c0) = 0;
      *(undefined4 *)(iVar6 + 0x3c4) = 0;
      if (iStack_2c != 0) {
        fn_822315A0();
      }
    }
    puVar5 = (undefined4 *)fn_8248F890(0x48);
    uVar3 = lbl_831D1AD8;
    uVar2 = lbl_831D1AD4;
    uVar1 = lbl_831D1AD0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[7] = 0xffffffff;
      puVar5[0xb] = uVar3;
      puVar5[8] = 0xffffffff;
      puVar5[0xc] = 1;
      *puVar5 = &lbl_821BEBF4;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = param_1;
    }
    fn_82359070(param_1,puVar5);
    *(undefined4 *)(param_1 + 0xe6c) = 1;
  }
  return;
}

