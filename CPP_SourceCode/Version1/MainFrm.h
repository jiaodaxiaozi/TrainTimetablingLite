// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__40C3DFF6_4EA4_11D4_91E5_0060B0FBBAC9__INCLUDED_)
#define AFX_MAINFRM_H__40C3DFF6_4EA4_11D4_91E5_0060B0FBBAC9__INCLUDED_

#if _MSC_VER > 1000
#pragma	once
#endif // _MSC_VER > 1000

class CMainFrame : public CFrameWnd
{

protected: // create from serialization only
   CMainFrame();
   DECLARE_DYNCREATE(CMainFrame)

      // Attributes
      public:

      // Operations
      public:
      CSplitterWnd    m_wndSplitter;
   CSplitterWnd    m_wndSplitter2;

   // Overrides
   // ClassWizard generated virtual function overrides
   //{{AFX_VIRTUAL(CMainFrame)
public:
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
   virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
   //}}AFX_VIRTUAL

   // Implementation
public:
   BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);

   virtual ~CMainFrame();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
   CStatusBar  m_wndStatusBar;
   CToolBar    m_wndToolBar;

   // Generated message map functions
protected:
   //{{AFX_MSG(CMainFrame)
   afx_msg void OnMenu001();
   afx_msg void OnCreateTree();
   afx_msg void OnTimeTableSettings();
   afx_msg void OnResult();
   afx_msg void OnBUTTONTrainList();
   afx_msg void OnTestRV();
   //}}AFX_MSG
   DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__40C3DFF6_4EA4_11D4_91E5_0060B0FBBAC9__INCLUDED_)
