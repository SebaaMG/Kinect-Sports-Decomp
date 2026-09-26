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
extern unsigned int *auStack_b0;
extern int fn_827F7210();
extern int fn_827F7218();
extern int fn_827F7230();
extern int fn_827F7360();
extern int fn_827F98C8();
extern int fn_827F99E8();
extern int fn_827F9B68();
extern int fn_82800A48();
extern int fn_82800A60();
extern int fn_8280B240();
extern int fn_8280D3A8();
extern int fn_82F68B40();
extern int fn_82F68B54();


/* WARNING: Removing unreachable block (ram,0x827f9248) */
/* WARNING: Removing unreachable block (ram,0x827f9250) */
/* WARNING: Removing unreachable block (ram,0x827f929c) */
/* WARNING: Removing unreachable block (ram,0x827f9258) */
/* WARNING: Removing unreachable block (ram,0x827f926c) */
/* WARNING: Removing unreachable block (ram,0x827f9264) */
/* WARNING: Removing unreachable block (ram,0x827f927c) */
/* WARNING: Removing unreachable block (ram,0x827f92a8) */
/* WARNING: Removing unreachable block (ram,0x827f92dc) */

void fn_827F93C0(int param_1)

{
  ushort uVar3;
  int iVar1;
  uint uVar2;
  float *pfVar4;
  ushort uVar5;
  undefined1 *puStack_c0;
  float *pfStack_bc;
  int aiStack_b8 [2];
  undefined1 auStack_b0 [176];
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(param_1 + 0x84);
    uVar3 = fn_827F7210();
    uVar5 = 0;
    if (uVar3 != 0) {
      pfVar4 = (float *)(iVar1 + 0x14);
      do {
        iVar1 = fn_827F99E8(param_1,uVar5);
        if (iVar1 == 0) {
          iVar1 = fn_82800A60(param_1);
          if (iVar1 == 0) {
            puStack_c0 = auStack_b0;
          }
          else {
            fn_82800A48(param_1,uVar5,&puStack_c0);
          }
          iVar1 = fn_827F9B68(param_1,uVar5);
          fn_827F98C8(param_1,uVar5,&pfStack_bc);
          if (iVar1 == 0) {
            fn_8280B240((double)*pfStack_bc,(double)pfStack_bc[1],(double)pfStack_bc[2],puStack_c0)
            ;
          }
          else {
            fn_8280D3A8((double)pfVar4[3],(double)pfVar4[4],(double)pfVar4[5],
                              (double)pfVar4[-5],(double)pfVar4[-4],(double)pfVar4[-3],
                              (double)pfVar4[-2],(double)(*pfStack_bc + pfVar4[-1]),
                              (double)(pfStack_bc[1] + *pfVar4),(double)(pfStack_bc[2] + pfVar4[1]))
            ;
          }
          uVar2 = fn_827F7218(param_1,uVar5);
          if (uVar2 == 0xffff) {
            fn_827F7230(param_1,aiStack_b8);
          }
          else {
            iVar1 = fn_827F9B68(param_1,uVar2 & 0xffff);
            if (iVar1 != 0) {
              iVar1 = uVar2 * 0x30 + *(int *)(param_1 + 0x84);
              fn_827F7360((double)*(float *)(iVar1 + 0x20),(double)*(float *)(iVar1 + 0x24),
                            (double)*(float *)(iVar1 + 0x28),(double)pfVar4[6]);
            }
            aiStack_b8[0] = uVar2 * 0x40 + *(int *)(param_1 + 0xc);
          }
        }
        uVar5 = uVar5 + 1;
        pfVar4 = pfVar4 + 0xc;
      } while (uVar5 < uVar3);
    }
    return;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_82F68B40();
    return;
  }
  fn_82F68B54();
  return;
}

