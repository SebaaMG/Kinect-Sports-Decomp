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
extern unsigned int lbl_821CA460;


void fn_826103B0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  if (param_5 == 0) {
    iVar2 = fn_82520780((double)*(float *)(param_3 + 0x58),0xffffffff83265a28);
    if (iVar2 != 0) {
      if ((*(int *)(param_3 + 0x10) == 0) || (iVar2 = *(int *)(param_1 + 0xdc), iVar2 == 0)) {
        iVar2 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x14));
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
        }
      }
      if (iVar2 != 0) {
        if ((*(int *)(**(int **)(param_1 + 0x60) + 0x93c) != 0) &&
           ((ulonglong)*(uint *)(iVar2 + 0x8c0) != 0)) {
          lVar3 = (ulonglong)*(uint *)(iVar2 + 0x8c0) + 0x128;
          iVar2 = fn_82573530(lVar3,param_3 + 0x15);
          if (iVar2 != 0) {
            dVar4 = (double)lbl_821CA460;
            do {
              piVar1 = *(int **)(iVar2 + 0x1b0);
              (**(code **)(*piVar1 + 8))(piVar1,5,0);
              if ((double)*(float *)(param_3 + 0x5c) != dVar4) {
                (**(code **)(*piVar1 + 8))(piVar1,0x15,*(undefined4 *)(param_3 + 0x5c));
              }
              iVar2 = fn_825764F0(lVar3,param_3 + 0x15,iVar2);
            } while (iVar2 != 0);
          }
        }
      }
    }
  }
  return;
}

