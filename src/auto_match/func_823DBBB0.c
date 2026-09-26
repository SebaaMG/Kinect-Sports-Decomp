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
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern int fn_823DBD00();
extern int fn_824CCD80();
extern int fn_824E94F0();
extern int fn_824EC288();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823DBBB0(int param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 in_r0;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 in_vs42 [16];
  float fVar6;
  float fVar7;
  undefined1 in_vr0 [16];
  float fVar8;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  undefined1 in_vr11 [16];
  undefined1 auVar9 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar10 [16];
  int aiStack_60 [2];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,0xffffffff821cc160); memcpy(auVar5, &_vt0, 16); }
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr12,4,3); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3); memcpy(auVar9, &_vt2, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar10,auVar9,3,2);
  vectorAddFloatingPoint(in_vs42,auVar5);
  iVar4 = fn_823DBD00(param_1,param_3,aiStack_60,&fStack_50,&fStack_58,param_6,param_7,
                            0xffffffff821cc160);
  if (iVar4 != 0) {
    if (((aiStack_60[0] == 1) || (aiStack_60[0] == 2)) || (aiStack_60[0] != 0)) {
      fn_824CCD80(*(undefined4 *)(*param_3 + 0x10));
      fn_824E94F0(-(double)(float)((double)fStack_58 * (double)lbl_8218E8E8 -
                                        (double)fStack_50),
                        -(double)(float)((double)fStack_54 * (double)lbl_8218E8E8 -
                                        (double)fStack_4c),(double)fStack_58,(double)fStack_54);
    }
    else {
      pfVar2 = (float *)((int)in_r0 + param_2 + 0x80 & 0xfffffff0);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      uVar1 = *(undefined4 *)(*param_3 + 0x10);
      pfVar3 = (float *)((int)&fStack_50 + (int)in_r0 & 0xfffffff0);
      *pfVar3 = *pfVar2 + in_register_00010010;
      pfVar3[1] = fVar6 + in_register_00010014;
      pfVar3[2] = fVar7 + in_register_00010018;
      pfVar3[3] = fVar8 + in_vr1;
      fn_824CCD80(uVar1);
      fn_824EC288((double)fStack_50,(double)fStack_4c,(double)fStack_48,
                        (double)*(float *)(param_1 + 0xb4),(double)*(float *)(param_1 + 0xb8),
                        (double)lbl_821CA460);
    }
  }
  return;
}

