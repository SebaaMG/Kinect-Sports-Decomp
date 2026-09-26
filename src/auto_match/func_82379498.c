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
extern unsigned int *auStack_40;
extern unsigned int fStack_24;
extern unsigned int fStack_4c;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_82534820();
extern int fn_82539560();
extern int fn_82552BE8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1C38;
extern unsigned int lbl_831D1C3C;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82379498(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  char cVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [28];
  float fStack_24;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      cVar3 = fn_82534820();
      if (cVar3 != '\0') {
        puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        dVar5 = (double)lbl_821CC160;
        dVar4 = (double)fn_82539560((double)fStack_4c,(double)lbl_831D1C38,(double)lbl_831D1C3C,
                                     dVar5,(double)lbl_82005748);
        if (dVar5 < dVar4) {
          uStack_50 = 0;
          fStack_4c = 0.0;
          uStack_48 = 0;
          fn_82230110(auStack_40,0xffffffff821b3844);
          fStack_24 = (float)dVar4;
          fn_8236D0D0(&uStack_50,auStack_40);
          fn_82230300(auStack_40,1,0);
          fn_82552BE8(*(undefined4 *)(*param_1 + 0x4c),param_2,param_1 + 8,&uStack_50);
          fn_822CD140(&uStack_50);
        }
      }
    }
  }
  return;
}

