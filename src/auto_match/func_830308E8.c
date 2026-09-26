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
extern int fn_83031460();


undefined8 fn_830308E8(int param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar3;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_8303091c:
      iVar3 = fn_83031460((undefined4 *)(param_1 + 0xe4),param_2,*param_3,
                                (ulonglong)*(uint *)(param_3 + 1) << 0x20);
      uVar2 = 2;
      if (iVar3 != 0) {
        uVar2 = 1;
      }
      return uVar2;
    }
    if (puVar1[1] == param_2) {
      if (puVar1 + 2 != (undefined4 *)0x0) {
        puVar1[2] = *(undefined4 *)param_3;
        puVar1[3] = *(undefined4 *)((int)param_3 + 4);
        puVar1[4] = *(undefined4 *)(param_3 + 1);
        return 1;
      }
      goto LAB_8303091c;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

