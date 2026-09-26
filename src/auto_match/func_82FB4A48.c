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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack_30 ((*(U64*)&iStack_30))
extern int fn_82FA8948();
extern int fn_82FA9208();
extern int fn_82FB4990();
extern unsigned int iStack_30;
extern unsigned int lbl_8216CC20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_82FB4A48(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x44) == '\0') {
      iVar1 = -(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34));
      if ((param_2 != 0) && (*(int *)(param_2 + 0x48) <= iVar1)) {
        iVar1 = *(int *)(param_2 + 0x48);
      }
      uStack_28 = 0;
      _iStack_30 = CONCAT44((int)((double)(longlong)iVar1 * lbl_8216CC20),
                            *(undefined4 *)(param_1 + 0x3c));
      fn_82FA8948(*(undefined4 *)(param_1 + 0x40),&iStack_30,0);
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))(*(int **)(param_1 + 0x40),param_1);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 4))(iVar1 + 4,0);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar1 != 0) {
    fn_82FA9208();
  }
  fn_82FB4990(param_1);
  return;
}

