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
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_826E6E40();
extern int fn_827D3518();


bool fn_826E6ED8(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(int *)(param_1 + 8) != 0) {
    fn_826E6E40();
    iVar2 = fn_827D3518((ulonglong)*(uint *)(param_1 + 8) + 4);
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 8) + 0x48))();
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        fn_8267C4F0();
      }
      fn_8267BE38(piVar1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

