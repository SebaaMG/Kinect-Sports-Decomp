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
extern int fn_822ABA88();
extern int fn_824BD858();
extern int fn_8288B760();
extern unsigned int lbl_821CC160;


void fn_8239BAA0(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_4);
  if (*(int *)(iVar2 + 0x24) != 0) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(uint *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      if (*(int *)(param_2 + 0x188) == 0) {
        if (*(int *)(param_2 + 0x184) == 0) {
          if (*(float *)(param_2 + 0x268) <= lbl_821CC160) {
            if (lbl_821CC160 <= *(float *)(param_2 + 0x268)) {
              dVar5 = (double)*(float *)(param_1 + 0x3a8);
              dVar4 = (double)*(float *)(param_1 + 0x3a4);
            }
            else {
              dVar5 = (double)*(float *)(param_1 + 0x338);
              dVar4 = (double)*(float *)(param_1 + 0x334);
            }
          }
          else {
            dVar5 = (double)*(float *)(param_1 + 0x328);
            dVar4 = (double)*(float *)(param_1 + 0x324);
          }
        }
        else {
          dVar5 = (double)*(float *)(param_1 + 0x398);
          dVar4 = (double)*(float *)(param_1 + 0x394);
        }
      }
      else {
        dVar5 = (double)*(float *)(param_1 + 0x378);
        dVar4 = (double)*(float *)(param_1 + 0x374);
      }
      fn_824BD858(dVar4,dVar5);
    }
  }
  return;
}

