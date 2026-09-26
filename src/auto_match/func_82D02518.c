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
extern int fn_82D02398();


undefined1 * fn_82D02518(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if (*(int **)(param_2 + 8) == (int *)0x0) {
        puVar3 = *(undefined4 **)(param_2 + 0xc);
        if (puVar3 == (undefined4 *)0x0) goto LAB_82d025f4;
        iVar1 = fn_82D02398(param_2,puVar3);
        if (iVar1 == 0) goto LAB_82d025c4;
        *(undefined4 *)(param_2 + 0xc) = *puVar3;
        *puVar3 = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 **)(param_2 + 0x10) = puVar3;
      }
      else {
        puVar3 = (undefined4 *)**(int **)(param_2 + 8);
        if (puVar3 == (undefined4 *)0x0) {
LAB_82d025f4:
          *param_4 = iVar2;
          *(undefined4 *)(param_2 + 8) = 0;
          *param_1 = 1;
          return param_1;
        }
        iVar1 = fn_82D02398(param_2,puVar3);
        if (iVar1 == 0) {
LAB_82d025c4:
          *(undefined4 **)(param_2 + 8) = puVar3;
        }
        else {
          **(undefined4 **)(param_2 + 8) = *puVar3;
          *puVar3 = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 **)(param_2 + 0x10) = puVar3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  *param_4 = iVar2;
  *param_1 = *(int *)(param_2 + 8) == 0;
  return param_1;
}

