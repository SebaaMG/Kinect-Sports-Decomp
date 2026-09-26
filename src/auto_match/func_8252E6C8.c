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
extern int fn_8263FB88();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CC160;


void fn_8252E6C8(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)fn_8263FB88(param_1,4,3,0x10);
  uVar2 = lbl_821CC160;
  if (-1 < (longlong)-(ulonglong)(puVar3 == (undefined4 *)0x0)) {
    *puVar3 = lbl_821CC160;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    fVar1 = lbl_821916FC;
    puVar3[5] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[10] = uVar2;
    puVar3[6] = fVar1;
    puVar3[0xb] = fVar1;
    puVar3[9] = (float)(longlong)param_3 * fVar1;
    puVar3[4] = (float)(longlong)param_2 * fVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3554);
  }
  return;
}

