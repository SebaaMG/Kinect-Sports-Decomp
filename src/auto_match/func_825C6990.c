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
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CAD2C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_825C6990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)fn_8265C9E0(0x88);
  uVar5 = lbl_821CC160;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 4);
    *puVar6 = &lbl_821CAD2C;
    puVar6[0x1b] = uVar5;
    puVar6[8] = 0;
    puVar6[0x1d] = uVar5;
    puVar6[0x1e] = uVar5;
    puVar6[6] = uVar1;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0xffffffff;
    puVar6[1] = param_2;
    fVar4 = lbl_821CA460;
    fVar3 = lbl_821916FC;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar2 = lbl_83265A28 & 0x7fffff;
    puVar6[10] = uVar5;
    *(undefined1 *)((int)puVar6 + 0x1d) = 1;
    puVar6[0x1c] = ((float)(uVar2 | 0x3f800000) - fVar4) * fVar3;
    puVar6[0x1f] = 0;
    puVar6[0x21] = 0xffffffff;
    puVar6[0x20] = 0;
  }
  puVar6[2] = param_3;
  puVar6[3] = param_4;
  puVar6[4] = param_5;
  puVar6[5] = param_6;
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

