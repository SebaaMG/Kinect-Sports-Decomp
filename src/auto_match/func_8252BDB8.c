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
extern int fn_82523220();
extern int fn_8252CAF8();
extern int fn_8252CC80();
extern int fn_8265C9E0();
extern float lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


bool fn_8252BDB8(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x8c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c0) + 8))();
    puVar1 = *(undefined4 **)(param_1 + 0x8c0);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(param_1 + 0x8c0) = 0;
  }
  uVar2 = fn_8265C9E0(0x319c0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82523220(uVar2,param_2,0);
  }
  *(undefined4 *)(param_1 + 0x8c0) = uVar3;
  iVar5 = 0;
  do {
    fn_8252CC80(param_1,*(char *)(param_1 + 0x930 + iVar5) != '\0',iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar4 = *(uint *)(param_1 + 0x91c);
  if (uVar4 == 4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar4 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8FC);
  }
  fn_8252CAF8(param_1,0xf,uVar4 & 0xff);
  return *(int *)(param_1 + 0x8c0) != 0;
}

