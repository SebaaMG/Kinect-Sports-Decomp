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
extern unsigned int uRam8323b6bc;
extern unsigned int uRam8323b6c0;
extern unsigned int uRam8323b6c4;


void fn_82D1FCD8(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = *(undefined4 **)(param_2 + 0x2c);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = uRam8323b6c4 & 1;
      if ((uRam8323b6c4 & 1) == 0) {
        uRam8323b6c4 = uRam8323b6c4 | 1;
        uRam8323b6c0 = 0;
        uRam8323b6bc = uVar4;
      }
      *param_1 = CONCAT44(uRam8323b6bc,uRam8323b6c0);
      return;
    }
    iVar6 = 8;
    piVar5 = puVar1 + 2;
    iVar2 = 0;
    iVar3 = 2;
    do {
      iVar7 = iVar2;
      if ((*(int *)(iVar6 + 8 + (int)puVar1) == param_3) && (*piVar5 == param_4)) {
        *(undefined4 **)param_1 = puVar1;
        *(int *)((int)param_1 + 4) = iVar3;
        return;
      }
      iVar6 = iVar7 << 2;
      piVar5 = piVar5 + 1;
      iVar2 = iVar7 + 1;
      iVar3 = iVar7;
    } while (iVar7 + 1 < 3);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

