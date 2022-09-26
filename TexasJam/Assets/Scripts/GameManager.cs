using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public bool startPlaying;
    public BeatScroller mBeatScroller;

    public static GameManager instance;

    public int currentScore;
    public int scorePerNote;
    //public int scorePerGoodNote;
    public int scorePerPerfectNote;

    public int currentMulti;
    public int multiTracker;
    public int[] multiThreshold;

    public Text scoreText;
    public Text multiText;
    public AudioSource music;


    


    // Start is called before the first frame update
    void Start()
    {
        scorePerNote = 100;
        //scorePerGoodNote = 120;
        scorePerPerfectNote = 150;
        currentMulti = 1;
        instance = this;
        scoreText.text = "Score: 0";

  
    }

    // Update is called once per frame
    void Update()
    {
        if (!startPlaying) 
        {
            if(Input.anyKeyDown)
            {
                startPlaying = true;
                //mBeatScroller.hasStarted = true;

                music.Play();
            }
        }

    }

    public void NoteHit()
    {
        Debug.Log("Hit on Time");
        if(currentMulti - 1 < multiThreshold.Length)
        {
            multiTracker++;
            if (multiThreshold[currentMulti -1 ] <= multiTracker)
            {
                multiTracker = 0;
                currentMulti++;
            }

        }

        multiText.text = "Multipler: x" + currentMulti;
        //currentScore += scorePerNote * currentMulti;
        scoreText.text = "Score: " + currentScore;
    }

    public void NoteMiss()
    {
        Debug.Log("Miss");
        currentMulti = 1;
        multiTracker = 0;
        multiText.text = "Multipler: x" + currentMulti;
    }

    public void NormalHit()
    {
        currentScore += scorePerNote * currentMulti;
        NoteHit();
    }

    //public void GoodHit()
    //{
    //    currentScore += scorePerGoodNote * currentMulti;
    //    NoteHit();
    //}

    public void PerfectHit()
    {

        currentScore += scorePerPerfectNote * currentMulti;
        NoteHit();
    }
}
