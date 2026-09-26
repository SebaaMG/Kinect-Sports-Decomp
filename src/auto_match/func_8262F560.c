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
extern int fn_82522ED8();
extern int fn_827D9780();
extern int fn_82F63CA0();


void fn_8262F560(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  piVar3 = *(int **)(iVar1 + 0x34);
  do {
    if (piVar3 == *(int **)(iVar1 + 0x38)) {
LAB_8262f5b4:
      piVar3 = *(int **)(iVar1 + 0x44);
      do {
        if (piVar3 == *(int **)(iVar1 + 0x48)) {
          return;
        }
        iVar2 = fn_827D9780(param_1 + 0x10,*piVar3);
        if (iVar2 == 0) {
          *(int *)(*piVar3 + 0x20) = *(int *)(*piVar3 + 0x20) + -1;
          if (*(int *)(*piVar3 + 0x20) == 0) {
            fn_82522ED8(*(undefined4 *)(*piVar3 + 0x18));
            fn_82F63CA0(piVar3,piVar3 + 1,(*(int *)(iVar1 + 0x48) - (int)(piVar3 + 1) >> 2) << 2);
            *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + -4;
            fn_82522ED8(*piVar3);
            return;
          }
        }
        piVar3 = piVar3 + 1;
      } while( true );
    }
    iVar2 = fn_827D9780(param_1 + 0x10,*piVar3);
    if (iVar2 == 0) {
      *(int *)(*piVar3 + 0x20) = *(int *)(*piVar3 + 0x20) + -1;
      goto LAB_8262f5b4;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

