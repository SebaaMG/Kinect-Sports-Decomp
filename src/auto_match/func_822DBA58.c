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
extern unsigned int *auStack_130;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_230;
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_822DB5D0();
extern int fn_822DB770();
extern int fn_822DBCB8();
extern int fn_822DBD60();
extern int fn_822DC2E0();
extern int fn_822DCF58();
extern int fn_822DD080();
extern int fn_8265CAA0();
extern unsigned int iStack_274;
extern unsigned int iStack_284;
extern unsigned int iStack_294;
extern unsigned int iStack_2a4;
extern unsigned int iStack_2ac;
extern unsigned int iStack_2b0;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_240;
extern unsigned int uStack_288;
extern unsigned int uStack_298;
extern unsigned int uStack_2a8;


int * fn_822DBA58(int *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iStack_2b0;
  int iStack_2ac;
  uint uStack_2a8;
  int iStack_2a4;
  int aiStack_2a0 [2];
  uint uStack_298;
  int iStack_294;
  int aiStack_290 [2];
  uint uStack_288;
  int iStack_284;
  undefined1 auStack_280 [12];
  int iStack_274;
  undefined4 auStack_270 [8];
  char *pcStack_250;
  char *pcStack_24c;
  char *pcStack_248;
  char *pcStack_244;
  undefined1 uStack_240;
  undefined4 auStack_230 [8];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 auStack_1f0 [64];
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  pcVar1 = (char *)*param_2;
  pcVar5 = pcVar1;
  do {
    pcVar7 = pcVar5;
    pcVar5 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  fn_822DB770(aiStack_2a0,param_3);
  iStack_294 = param_3[3];
  fn_822DB770(aiStack_290,aiStack_2a0);
  iStack_284 = iStack_294;
  fn_822DB770(&iStack_2b0,aiStack_290);
  auStack_270[0] = 0;
  iStack_2a4 = iStack_284;
  fn_822DB770(auStack_280,&iStack_2b0);
  iStack_274 = iStack_2a4;
  fn_822DD080(auStack_270,auStack_280);
  if ((8 < uStack_2a8) && (iStack_2b0 != 0)) {
    fn_8265CAA0();
  }
  if ((8 < uStack_288) && (aiStack_290[0] != 0)) {
    fn_8265CAA0();
  }
  uStack_240 = 0;
  pcStack_250 = pcVar1;
  pcStack_24c = pcVar1;
  pcStack_248 = pcVar1;
  pcStack_244 = pcVar7;
  fn_822DC2E0(auStack_270);
  if ((8 < uStack_298) && (aiStack_2a0[0] != 0)) {
    fn_8265CAA0();
  }
  uVar6 = fn_822DBCB8(auStack_230,auStack_270);
  fn_822DBCB8(auStack_170,uVar6);
  fn_822DBD60(uVar6);
  fn_822DBD60(auStack_270);
  auStack_230[0] = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  fn_822DBCB8(auStack_1b0,auStack_230);
  fn_822DBD60(auStack_230);
  fn_822DBCB8(auStack_130,auStack_1b0);
  fn_822DBCB8(auStack_f0,auStack_170);
  iStack_2b0 = 0;
  iStack_2ac = 0;
  uStack_2a8 = 0;
  fn_822DBCB8(auStack_1f0,auStack_130);
  fn_822DBCB8(auStack_230,auStack_f0);
  fn_822DBCB8(auStack_b0,auStack_1f0);
  fn_822DBCB8(auStack_70,auStack_230);
  fn_822DCF58(&iStack_2b0,0,auStack_70,auStack_b0);
  fn_822DBD60(auStack_230);
  fn_822DBD60(auStack_1f0);
  fn_822DBD60(auStack_f0);
  fn_822DBD60(auStack_130);
  if (param_1 != &iStack_2b0) {
    iVar2 = *param_1;
    *param_1 = iStack_2b0;
    iVar3 = param_1[1];
    param_1[1] = iStack_2ac;
    iVar4 = param_1[2];
    param_1[2] = uStack_2a8;
    iStack_2b0 = iVar2;
    iStack_2ac = iVar3;
    uStack_2a8 = iVar4;
  }
  fn_822DB5D0(&iStack_2b0);
  fn_822DBD60(auStack_1b0);
  fn_822DBD60(auStack_170);
  if ((8 < (uint)param_3[2]) && (*param_3 != 0)) {
    fn_8265CAA0();
  }
  return param_1;
}

