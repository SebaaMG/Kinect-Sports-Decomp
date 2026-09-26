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
extern int fn_822315A0();
extern int fn_823BE8C8();
extern int fn_825089A0();
extern unsigned int lbl_821B903C;


void fn_82361860(int param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar3;
  longlong lVar2;
  int iVar4;
  
  if (param_3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    if (*param_3 == 0) {
      piVar3 = (int *)fn_825089A0();
      lVar2 = (**(code **)(*piVar3 + 0x24))(piVar3,0x1b8,1);
      puVar1 = (undefined4 *)lVar2;
      if (lVar2 != 0) {
        puVar1[1] = 1;
        *puVar1 = &lbl_821B903C;
        puVar1[2] = 1;
        if (lVar2 != -0x10) {
          fn_823BE8C8();
        }
      }
      iVar4 = param_3[1];
      param_3[1] = (int)puVar1;
      *param_3 = (int)(puVar1 + 4);
      if (iVar4 != 0) {
        fn_822315A0();
      }
    }
    iVar4 = *param_3;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,iVar4);
  return;
}

