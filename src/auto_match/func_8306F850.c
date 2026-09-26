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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern int fn_8306E828();
extern int fn_8306E888();
extern int fn_8306F598();
extern int fn_8306F768();
extern int fn_83075D30();
extern int fn_83075D80();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82186E20;


void fn_8306F850(double param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  if (*(int *)(param_2 + 0xd24) != 0) {
    fn_83075D30(auStack_50,param_3,0xe);
    fn_83075D30(auStack_60,param_3,0x12);
    if (*(int *)(param_5 + 0xc) != 0) {
      fn_8306F598(param_1,param_2,param_3,0xe);
      fn_8306F598(param_1,param_2,param_3,0x12);
    }
    if ((*(char *)(param_2 + 0xa94) == '\0') || (*(char *)(param_2 + 0xba4) == '\0')) {
      fn_83075D30(auStack_50,param_3,0xe);
      fn_83075D30(auStack_60,param_3,0x12);
      if (*(char *)(param_2 + 0xa94) == '\0') {
        if ((*(char *)(param_2 + 0xba4) == '\0') || (fStack_5c <= fStack_4c)) goto LAB_8306fa28;
        fStack_4c = fStack_5c;
        uVar1 = 0xe;
      }
      else {
        if (fStack_4c <= fStack_5c) goto LAB_8306fa28;
        uVar1 = 0x12;
      }
      fStack_5c = fStack_4c;
      fn_83075D80(param_3,uVar1);
    }
    else {
      dVar3 = (double)(lbl_82186E20 / *(float *)(param_2 + 0xd20));
      dVar2 = (double)fn_8306E888((double)(*(float *)(param_2 + 0xa74) -
                                           *(float *)(param_2 + 0xb84)));
      if (dVar2 < dVar3) {
        dVar2 = (double)*(float *)(param_2 + 0xa74);
        dVar3 = (double)*(float *)(param_2 + 0xb84);
        if (dVar3 <= dVar2) {
          dVar2 = (double)fn_8306E828(dVar2,dVar3,(double)(float)(param_1 * (double)lbl_82002C2C));
          *(float *)(param_2 + 0xa74) = (float)dVar2;
        }
        else {
          dVar2 = (double)fn_8306E828(dVar3,dVar2,(double)(float)(param_1 * (double)lbl_82002C2C));
          *(float *)(param_2 + 0xb84) = (float)dVar2;
        }
      }
    }
  }
LAB_8306fa28:
  dVar2 = (double)lbl_8200133C;
  if ((double)*(float *)(param_2 + 0xb00) <= dVar2) {
    fn_8306F768(param_1,param_3,0xd,0xc,param_2 + 0xaa0,param_2 + 0xb04,param_2 + 0xb10);
    fn_8306F768(param_1,param_3,0xe,0xd,param_2 + 0xab0,param_2 + 0xb08,param_2 + 0xb14);
    fn_8306F768(param_1,param_3,0xf,0xe,param_2 + 0xac0,param_2 + 0xb0c,param_2 + 0xb18);
  }
  if ((double)*(float *)(param_2 + 0xc10) <= dVar2) {
    fn_8306F768(param_1,param_3,0x11,0x10,param_2 + 0xbb0,param_2 + 0xc14,param_2 + 0xc20);
    fn_8306F768(param_1,param_3,0x12,0x11,param_2 + 0xbc0,param_2 + 0xc18,param_2 + 0xc24);
    fn_8306F768(param_1,param_3,0x13,0x12,param_2 + 0xbd0,param_2 + 0xc1c,param_2 + 0xc28);
  }
  return;
}

