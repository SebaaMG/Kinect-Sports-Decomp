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
#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_822B83D0();
extern int fn_822C6880();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_825113E0();
extern int fn_82522ED8();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_8255FD70();
extern int fn_825613E0();
extern int fn_8265CA20();
extern int fn_827F6328();
extern int fn_827F6370();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_822DDA78(int param_1)

{
  float fVar1;
  int in_r0;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  int *apiStack_50 [20];
  
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  if (0xf < *(uint *)(param_1 + 0x70)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  fn_8255FD70(apiStack_50,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x24),
                    puVar2);
  iVar3 = *apiStack_50[0];
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x204) == 0) {
    fn_822B83D0(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x118),iVar3);
  }
  else {
    fn_8255F880(apiStack_50,iVar3 + 0x40);
    puVar2 = (undefined4 *)fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,apiStack_50);
    dVar6 = (double)*(float *)(iVar3 + 0x48);
    dVar5 = (double)fn_827F6328();
    dVar4 = (double)(*(float *)(*(int *)(param_1 + 0x54) + 0x2fc) - lbl_821917D4);
    fVar1 = (float)(dVar4 - (double)(float)(dVar5 / dVar6));
    dVar5 = (double)(float)(dVar5 / dVar6);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar5 = dVar4;
    }
    fn_822B83D0(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x118),iVar3);
    fVar1 = (float)(dVar5 - (double)lbl_82193AF0);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar5 = (double)lbl_82193AF0;
    }
    fn_827F6370(dVar5);
    (**(code **)*puVar2)(puVar2,0);
    fn_82522ED8(puVar2);
  }
  iVar3 = fn_82365BD8(apiStack_50,param_1 + 0x78);
  fn_82376640(param_1 + 0x30,iVar3);
  if (*(int *)(iVar3 + 4) != 0) {
    fn_822315A0();
  }
  fn_825113E0((ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x14,
                    param_1 + 0x80);
  fn_822C6880(*(undefined4 *)(param_1 + 0x24));
  iVar3 = *(int *)(param_1 + 0x24);
  dVar5 = (double)*(float *)(iVar3 + 0x40);
  fn_825613E0(-dVar5,dVar5);
  puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x300) = 1;
  fn_8265CA20(apiStack_50[0]);
  return;
}

