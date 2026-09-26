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
extern int fn_82437EC8();
extern int fn_8243C0C0();


undefined8 fn_8243A970(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  fn_8243C0C0();
  if (*(int *)(param_2 + 0x14) == 0) {
    fn_82437EC8(param_2,2);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if ((*(int *)(param_2 + 0x18) == iVar1) || (bVar3 = true, *(int *)(param_2 + 0x18) == 0)) {
    bVar3 = false;
  }
  if (!bVar3) {
    if (((*(int *)(*(int *)(param_2 + 0x40) + 0x1d4) == -1) ||
        (piVar2 = *(int **)(*(int *)(*(int *)(param_2 + 0x40) + 0x1d4) * 4 +
                           *(int *)(*(int *)(param_2 + 0x40) + 0x1c4)), piVar2 == (int *)0x0)) ||
       (iVar1 == 7)) {
      return 1;
    }
    if ((iVar1 != 3) && (*(char *)(piVar2[0x10] + 8) != '\0')) {
      if ((piVar2[6] == piVar2[5]) || (bVar3 = true, piVar2[6] == 0)) {
        bVar3 = false;
      }
      if (!bVar3) {
        (**(code **)(*piVar2 + 0x14))(piVar2);
        fn_82437EC8(param_2,3);
        return 0;
      }
    }
    fn_8243C0C0(param_1,piVar2);
    if ((*(char *)(piVar2[0x10] + 8) == '\0') && (piVar2[5] == 1)) {
      if ((piVar2[6] == 1) || (bVar3 = true, piVar2[6] == 0)) {
        bVar3 = false;
      }
      if (!bVar3) {
        return 1;
      }
    }
  }
  return 0;
}

