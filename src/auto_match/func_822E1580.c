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
extern int fn_82230360();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822E1580(int param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uStack_30;
  
  fn_8255FD70(&uStack_30,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x118) + 0x24),
                    param_2);
  iVar4 = (((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(longlong)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  pcVar3 = *(char **)(iVar1 * 4 + (((U64)(uStack_30) >> 0) & 0xFFFFFFFF));
  pcVar5 = pcVar3;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uStack_30 = (longlong)iVar1;
  fn_82230360(param_1 + 0x2c,pcVar3,pcVar5 + (-1 - (int)pcVar3));
  if (iVar4 != 0) {
    fn_8265CA20(iVar4);
  }
  return;
}

