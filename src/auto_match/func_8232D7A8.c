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
extern int fn_8232C528();
extern int fn_82520780();


void fn_8232D7A8(int param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_2 < 3) || ((5 < param_2 && (param_2 == 6)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(float *)(param_1 + 0x44) =
       ((*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x1c)) /
       *(float *)(*(int *)(param_1 + 8) + 0x4e0)) * *(float *)(*(int *)(param_1 + 8) + 0x4e8) +
       *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x44);
  if ((*(int *)(*(int *)(param_1 + 0xc) + 8) == 2) &&
     (iVar3 = fn_82520780(0xffffffff83265a28), iVar3 != 0)) {
    piVar1 = *(int **)(param_1 + 0xc);
    iVar3 = piVar1[2];
    piVar1[2] = (uint)!bVar2;
    (**(code **)(*piVar1 + 0x14))(piVar1,iVar3);
    fn_8232C528(*(undefined4 *)(param_1 + 0xc),1);
  }
  return;
}

