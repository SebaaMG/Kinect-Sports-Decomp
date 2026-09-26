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
extern int fn_8251E4D0();
extern int fn_8251F720();
extern int fn_825A2410();
extern int fn_8265B648();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821954CC;
extern unsigned int lbl_82195510;
extern unsigned int lbl_82195514;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C080C;
extern unsigned int lbl_831C0810;
extern unsigned int lbl_831C0814;
extern unsigned int lbl_831C0818;
extern unsigned int lbl_831C081C;
extern unsigned int lbl_831C0820;
extern unsigned int lbl_831C0824;
extern unsigned int lbl_831C0828;
extern unsigned int lbl_831C082C;
extern unsigned int lbl_831C0830;
extern unsigned int lbl_831C0834;
extern unsigned int lbl_831C0838;
extern unsigned int lbl_831C083C;
extern unsigned int lbl_831C0840;
extern unsigned int lbl_831C0844;
extern int (*lbl_8326AF2C)();
extern int (*lbl_8326AF30)();


void fn_82527168(int param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int aiStack_30 [12];
  
  aiStack_30[0] = *param_2;
  lbl_831C0828 = 0;
  lbl_831C0844 = 1;
  lbl_831C0810 = lbl_821CC160;
  lbl_831C0818 = lbl_821CC160;
  lbl_831C080C = lbl_821CC160;
  lbl_831C0814 = lbl_821CC160;
  lbl_831C081C = lbl_82191FCC;
  lbl_831C0820 = lbl_821CC160;
  lbl_831C0824 = lbl_821CC160;
  lbl_831C082C = lbl_82195510;
  lbl_831C0830 = lbl_82195514;
  lbl_831C0834 = lbl_82192F70;
  lbl_831C0838 = lbl_821954CC;
  lbl_831C083C = lbl_8218E8FC;
  lbl_831C0840 = lbl_8218E8E8;
  if (aiStack_30[0] == 0) {
    aiStack_30[0] = 0;
  }
  else {
    fn_8265B648(aiStack_30,0x19);
  }
  if (lbl_8326AF2C != (code *)0x0) {
    (*lbl_8326AF2C)(aiStack_30);
  }
  lVar1 = fn_8251F720(aiStack_30,0);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)fn_825A2410(*(int *)(param_1 + 0x88c) * 0xc + param_1 + 0x85c);
    *puVar2 = (int)lVar1;
    puVar2[1] = (int)lVar1;
                    /* WARNING: Subroutine does not return */
    fn_8251E4D0(param_1 + 0x7a8);
  }
  if (lbl_8326AF30 != (code *)0x0) {
    (*lbl_8326AF30)(0);
  }
  return;
}

