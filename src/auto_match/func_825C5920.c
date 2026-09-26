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
extern unsigned int *auStack_e0;
extern int fn_825443D8();
extern int fn_82544718();
extern int fn_825C5F68();
extern int fn_8262FE50();
extern int fn_82631578();
extern unsigned int lbl_8320A898;
extern unsigned int uStack00000024;
extern unsigned int uStack_11c;
extern unsigned int uStack_124;


void fn_825C5920(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uStack00000024;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined1 auStack_e0 [224];
  
  uStack00000024 = (undefined4)param_3;
  if (*(int *)(param_1 + 8) != 0) {
    cVar2 = fn_825C5F68(param_1,param_3);
    if (cVar2 != '\0') {
      uStack_11c = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3224);
      uStack_124 = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220);
      fn_825443D8(param_3);
      fn_82544718(auStack_e0,uStack_124,uStack_11c,0x18280186,0,0);
      if (*(int *)(lbl_8320A898 + 0x3148) != 0) {
        fn_8262FE50();
      }
      iVar1 = lbl_8320A898;
      *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
      *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
                    /* WARNING: Subroutine does not return */
      fn_82631578(lbl_8320A898,*(undefined4 *)(param_1 + 0x14));
    }
  }
  return;
}

