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
extern int fn_82520780();
extern int fn_82569980();
extern int fn_82573530();
extern int fn_825764F0();


void fn_826104E8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_5 == 0) || (param_5 == 3)) {
    iVar1 = fn_82520780((double)*(float *)(param_3 + 0x58),0xffffffff83265a28);
    if (iVar1 != 0) {
      if ((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_1 + 0xdc), iVar1 == 0)) {
        iVar1 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x14));
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
        }
      }
      if (iVar1 != 0) {
        if ((*(int *)(**(int **)(param_1 + 0x60) + 0x93c) != 0) &&
           ((ulonglong)*(uint *)(iVar1 + 0x8c0) != 0)) {
          lVar2 = (ulonglong)*(uint *)(iVar1 + 0x8c0) + 0x128;
          for (iVar1 = fn_82573530(lVar2,param_3 + 0x15); iVar1 != 0;
              iVar1 = fn_825764F0(lVar2,param_3 + 0x15,iVar1)) {
            (**(code **)(**(int **)(iVar1 + 0x1b0) + 8))(*(int **)(iVar1 + 0x1b0),0,0);
          }
        }
      }
    }
  }
  return;
}

