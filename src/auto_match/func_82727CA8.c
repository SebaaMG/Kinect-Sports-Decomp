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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_82697700();
extern int fn_827451A8();
extern int fn_82746C20();
extern int fn_827A1B60();
extern unsigned int lbl_82005720;
extern unsigned int lbl_821AAD20;


void fn_82727CA8(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar5;
  undefined8 uVar3;
  char cVar6;
  ulonglong uVar4;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar5 == 4) {
      iVar5 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar5 = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        uVar3 = fn_82697700(uVar3,uVar1);
        fStack_50 = lbl_821AAD20;
        fStack_4c = lbl_821AAD20;
        fStack_48 = lbl_821AAD20;
        fStack_44 = lbl_821AAD20;
        cVar6 = fn_827A1B60(*(undefined4 *)(iVar5 + 0xa0),&fStack_50,uVar3);
        if (cVar6 == '\0') {
          puVar2 = *(undefined1 **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 1;
        }
        else {
          uVar4 = fn_8267B890(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,0);
          if ((uVar4 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_82746C20(uVar4,*(undefined4 *)(param_1 + 0x18));
          }
          dStack_40 = (double)fStack_50 * lbl_82005720;
          dStack_38 = (double)fStack_4c * lbl_82005720;
          dStack_30 = (double)fStack_48 * lbl_82005720;
          dStack_28 = (double)fStack_44 * lbl_82005720;
          fn_827451A8(uVar4,*(undefined4 *)(param_1 + 0x18),&dStack_40);
          fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar4);
          if ((uVar4 & 0xffffffff) != 0) {
            fn_826824B0(uVar4);
          }
        }
      }
    }
  }
  return;
}

